//
//  ZYQAppDelegate.h
//  DrawerPushPop
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface ZYQAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@property (strong, nonatomic) TSNavigationController *navigationController;

+(ZYQAppDelegate*)instance;


@end
