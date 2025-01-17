//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_mach, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerListener : NSObject
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_mach> *_channel;
    CDStruct_3fd7985f _statusBarData;
    CDStruct_3fd7985f _composedStatusBarData;
    CDStruct_e922dd9d _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    _Bool _composedStatusBarDataValid;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (_Bool)_permanentizeStatusBarOverrideData;
- (void)_postStatusBarOverrideData:(CDStruct_e922dd9d *)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (_Bool)_glowAnimationStateForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStyleOverrides;
- (int)_styleOverrides;
- (void)_postStatusBarData:(CDStruct_3fd7985f *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(_Bool)arg2;
- (CDStruct_e922dd9d *)_statusBarOverrideData;
- (CDStruct_3fd7985f *)_statusBarData;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_addClient:(unsigned int)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (id)init;

@end

