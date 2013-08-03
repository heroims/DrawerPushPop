//
//  ViewController.m
//  DrawerFrame
//
//  Created by Zhao Yiqi on 13-7-25.
//  Copyright (c) 2013年 Zhao Yiqi. All rights reserved.
//

#import "ViewController.h"
#import "ViewController2.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)go2nextPage:(id)sender {
    ViewController2 *debugPanel = [[ViewController2 alloc] init];
	[self.navigationController pushViewController:debugPanel animated:YES];
    [debugPanel release];
}
@end
