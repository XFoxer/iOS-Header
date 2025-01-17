//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MacSceneHostingPreferencesPresentationController, OBPrivacySplashController, UINavigationController, UIWindow;
@protocol UGCAppKitPreferencesPrivacyControllerDelegate;

__attribute__((visibility("hidden")))
@interface UGCAppKitPreferencesPrivacyController : NSObject
{
    MacSceneHostingPreferencesPresentationController *_presentationController;
    OBPrivacySplashController *_obkSplashController;
    UINavigationController *_navigationController;
    UIWindow *_window;
    id <UGCAppKitPreferencesPrivacyControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UGCAppKitPreferencesPrivacyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dismissSplashScreen;
- (void)present;

@end

