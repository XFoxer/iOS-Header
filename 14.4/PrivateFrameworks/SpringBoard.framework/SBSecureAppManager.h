//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, SBWakeDestination;

@interface SBSecureAppManager : NSObject
{
    NSMutableDictionary *_secureAppActions;
    NSMutableArray *_remoteAlertActions;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *remoteAlertActions; // @synthesize remoteAlertActions=_remoteAlertActions;
@property(retain, nonatomic) NSMutableDictionary *secureAppActions; // @synthesize secureAppActions=_secureAppActions;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(CDUnknownBlockType)arg1;
- (id)_applicationForAction:(id)arg1;
- (id)_applicationSceneEntityForAction:(id)arg1;
- (void)_addRemoteAlertLockScreenContentAction:(id)arg1;
- (void)_addSecureAppAction:(id)arg1;
- (id)secureAppAction;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (_Bool)hasSecureAppOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasSecureApp;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addLockScreenContentAction:(id)arg1;
@property(readonly, nonatomic) SBWakeDestination *wakeDestinaton;
@property(readonly, nonatomic) _Bool hasWakeDestinaton;
- (id)init;

@end

