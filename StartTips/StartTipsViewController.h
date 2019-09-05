//
//  StartTipsViewController.h
//
//  Created by Hans on 19/07/2017.
//  Copyright © 2017 Hans. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol StartTipsViewControllerDelegate;
@interface StartTipsViewController : UIPageViewController{
    id <StartTipsViewControllerDelegate> delegateForSignIn;
    BOOL supportiPad;
}
//default is YES, Many App may can NOT support iPad, then when the app run under iPad is failed.
@property(nonatomic) BOOL supportiPad;

//include sign in button when delegateForSignIn != nil and startTipspressSignIn
@property (nonatomic) id <StartTipsViewControllerDelegate> delegateForSignIn;
//return YES when showed
-(BOOL)showOneTime;
-(void)forceShow;
@end


@protocol StartTipsViewControllerDelegate <NSObject>
@optional
// include sign in button when delegate has this protocol
-(void)startTipspressSignIn:(StartTipsViewController *)view;

@end
