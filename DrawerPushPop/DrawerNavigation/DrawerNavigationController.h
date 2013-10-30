//
//  DrawerNavigationController.h
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawerNavigationController : UINavigationController{
    BOOL isShowDrawerAnimate;
    UIPanGestureRecognizer *panGestureRecognier;
}

@property (nonatomic, strong) UIImageView *imageView;

- (void)pushViewController:(UIViewController *)viewController WithDrawerAnimate:(BOOL)animated;
- (void)popViewControllerWithDrawerAnimate;

@end
