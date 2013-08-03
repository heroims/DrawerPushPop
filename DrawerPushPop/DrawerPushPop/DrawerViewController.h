//
//  DrawerViewController.h
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawerViewController : UIViewController {
}

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UIView *contentView;

- (void)initDrawerView;

- (BOOL)isDrawerView;

@end
