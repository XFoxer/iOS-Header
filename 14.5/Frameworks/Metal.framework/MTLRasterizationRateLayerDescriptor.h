//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLRasterizationRateSampleArray;

@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1 horizontal:(const float *)arg2 vertical:(const float *)arg3;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) MTLRasterizationRateSampleArray *horizontal; // @dynamic horizontal;
@property(readonly, nonatomic) float *horizontalSampleStorage; // @dynamic horizontalSampleStorage;
@property(readonly, nonatomic) CDStruct_da2e99ad sampleCount; // @dynamic sampleCount;
@property(readonly, nonatomic) MTLRasterizationRateSampleArray *vertical; // @dynamic vertical;
@property(readonly, nonatomic) float *verticalSampleStorage; // @dynamic verticalSampleStorage;

@end

