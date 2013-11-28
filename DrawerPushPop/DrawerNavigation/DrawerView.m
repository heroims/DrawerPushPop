//
//  DrawerView.m
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import "DrawerView.h"
#import <QuartzCore/QuartzCore.h>

@implementation DrawerView

#if __has_feature(objc_arc)
#else
-(void)dealloc{
    if (lastViewImage!=nil) {
        [lastViewImage release];
    }
    if (_parentView!=nil) {
        [_parentView release];
    }
    if (_contentView!=nil) {
        [_contentView release];
    }
    [super dealloc];
}
#endif

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (id)initWithView:(UIView *)contentView parentView:(UIView *)parentView{
    
    self = [super initWithFrame:CGRectMake(0,0,contentView.frame.size.width, contentView.frame.size.height)];
    if (self) {
        [self addSubview:contentView];
        
        if (UIGraphicsBeginImageContextWithOptions != NULL) {
            UIGraphicsBeginImageContextWithOptions(parentView.frame.size, NO, 0.0);
        }
        else {
            UIGraphicsBeginImageContext(parentView.frame.size);
        }
        
        [parentView.layer renderInContext:UIGraphicsGetCurrentContext()];
        lastViewImage = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        
        UIImageView *imageView = [[UIImageView alloc]initWithImage:lastViewImage];
        imageView.frame  = CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
        [self addSubview:imageView];
        
#if __has_feature(objc_arc)
#else
        [imageView release];
#endif
    }
    
    self.parentView = parentView;
    return self;
}


/*
 // Only override drawRect: if you perform custom drawing.
 // An empty implementation adversely affects performance during animation.
 - (void)drawRect:(CGRect)rect
 {
 // Drawing code
 }
 */

@end
