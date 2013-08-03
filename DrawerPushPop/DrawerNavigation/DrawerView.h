//
//  DrawerView.h
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawerView : UIView
{
    UIImage *lastViewImage;
    BOOL isPanComment;
}
- (id)initWithView:(UIView*)contentView parentView:(UIView*) parentView;

@property (nonatomic, strong) UIView *parentView; //抽屉视图的父视图
@property (nonatomic, strong) UIView *contentView; //抽屉显示内容的视图

@end