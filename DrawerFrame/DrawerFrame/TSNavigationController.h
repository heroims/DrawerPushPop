//
//  TSNavigatioController.h
//  DrawerFrame
//
//  Created by apple on 13-3-28.
//  Copyright (c) 2013年 Theosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TSNavigationController : UINavigationController

@property (nonatomic, strong) UIImageView *imageView;

-(void)popViewControllerWithTSAnimate;

@end
