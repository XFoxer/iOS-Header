//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, UIViewController;

@interface PUWelcomeViewControllersManager : NSObject
{
    NSArray *__welcomeViewControllerClasses;
    NSMutableSet *__remainingWelcomeViewControllerClassesToPresent;
    UIViewController *__presentingViewController;
    Class __presentedWelcomeViewControllerClass;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(nonatomic, setter=_setPresentedWelcomeViewControllerClass:) Class _presentedWelcomeViewControllerClass; // @synthesize _presentedWelcomeViewControllerClass=__presentedWelcomeViewControllerClass;
@property(retain, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController; // @synthesize _presentingViewController=__presentingViewController;
@property(readonly, copy, nonatomic) NSMutableSet *_remainingWelcomeViewControllerClassesToPresent; // @synthesize _remainingWelcomeViewControllerClassesToPresent=__remainingWelcomeViewControllerClassesToPresent;
@property(readonly, copy, nonatomic) NSArray *_welcomeViewControllerClasses; // @synthesize _welcomeViewControllerClasses=__welcomeViewControllerClasses;
- (void)_handleWelcomeViewControllerCompletion;
- (void)_update;
- (void)_reset;
- (void)resetAllLastPresentationInfos;
- (void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)arg1;
- (id)_initWithWelcomeViewControllerClasses:(id)arg1;
- (id)init;

@end

