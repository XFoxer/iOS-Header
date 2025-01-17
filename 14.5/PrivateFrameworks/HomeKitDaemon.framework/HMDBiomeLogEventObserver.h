//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventObserver-Protocol.h>

@class HMDBiomeEventManager, NSString;
@protocol HMDBiomeLogEventObserverDataSource;

@interface HMDBiomeLogEventObserver : HMFObject <HMDLogEventObserver>
{
    HMDBiomeEventManager *_biomeEventManager;
    id <HMDBiomeLogEventObserverDataSource> _dataSource;
}

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2;
- (id)initWithBiomeEventManager:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

