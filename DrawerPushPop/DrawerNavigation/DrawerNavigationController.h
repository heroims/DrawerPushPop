//
//  TSNavigatioController.h
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawerNavigationController : UINavigationController

@property (nonatomic, strong) UIImageView *imageView;

-(void)popViewControllerWithDrawerAnimate;

@end
