//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMZone.h>

@class NSArray;

@interface HMZone (HomePod)
+ (id)zonesWithHomePodsFromZones:(id)arg1;
+ (id)roomsInZones:(id)arg1 appendingRooms:(id)arg2;
+ (id)roomsInZones:(id)arg1;
+ (id)uniqueIdentifiersFromZones:(id)arg1;
+ (id)accessoriesInZones:(id)arg1;
+ (id)zonesWithAnnounceAccessoriesFromZones:(id)arg1;
@property(readonly, nonatomic) NSArray *homePods;
@property(readonly, nonatomic) NSArray *accessories;
@end

