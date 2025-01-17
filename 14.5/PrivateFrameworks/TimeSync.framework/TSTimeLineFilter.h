//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTimeLineFilter : NSObject
{
}

@property(readonly, nonatomic) _Bool canConvertTime;
- (void)resetFilter;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;
- (void)getAnchors:(CDStruct_4bcfbbae *)arg1 andRateRatio:(CDStruct_4bcfbbae *)arg2;
@property(readonly, nonatomic) CDStruct_4bcfbbae rateRatio;
- (void)addTimestamps:(CDStruct_4bcfbbae)arg1;

@end

