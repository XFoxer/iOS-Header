//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSourceAvailabilityEntry-Protocol.h>

@class FCNetworkReachability, FCNewsAvailabilityMonitor, NSString;
@protocol OS_dispatch_queue;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>
{
    _Bool _available;
    CDUnknownBlockType _availabilityChangedNotificationBlock;
    FCNetworkReachability *_networkReachability;
    FCNewsAvailabilityMonitor *_NewsAvailabilityMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) FCNewsAvailabilityMonitor *NewsAvailabilityMonitor; // @synthesize NewsAvailabilityMonitor=_NewsAvailabilityMonitor;
@property(retain, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (_Bool)_isAvailableAssumingStoreFrontIsSupported:(_Bool)arg1;
- (_Bool)_isAvailable;
- (void)_updateAvailability;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) Class todayResultsFetchDescriptorClass;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock; // @synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock;
@property(readonly, nonatomic, getter=isLikelyAvailable) _Bool likelyAvailable;
- (id)initWithNetworkReachability:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

