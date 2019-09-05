//
//  ViewController.m
//  DemoStartTips
//
//  Copyright © 2019 MingJie Han. All rights reserved.
//

#import "ViewController.h"
#import "StartTipsViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}


-(void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    StartTipsViewController *start_tips = [[StartTipsViewController alloc] init];
    if (start_tips){
        BOOL res = [start_tips showOneTime];
        if (!res){
            NSLog(@"StartTipsViewController NOT show because this version has showed last time.");
        }else{
            NSLog(@"StartTipsViewController showed.");
        }
    }else{
        NSLog(@"StartTipsViewController init error.");
    }
    return;
}

@end
