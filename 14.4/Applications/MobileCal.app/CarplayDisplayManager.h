//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISceneDelegate-Protocol.h"

@class NSString, UIWindow;

@interface CarplayDisplayManager : NSObject <UISceneDelegate>
{
    UIWindow *_carWindow;
}

- (void).cxx_destruct;
- (void)_setUpSelectedCalendarsOnModel:(id)arg1;
- (id)_createAndSetupModel;
- (id)_rootViewControllerForCarScene;
- (void)_openURL:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

