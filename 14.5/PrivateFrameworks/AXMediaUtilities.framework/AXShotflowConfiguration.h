//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject
{
    NSArray *_filterThresholds;
    NSNumber *_networkThreshold;
    NSNumber *_nmsThreshold;
    NSArray *_defaultBoxesSidesNormalized;
    NSArray *_ratios;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *ratios; // @synthesize ratios=_ratios;
@property(readonly, nonatomic) NSArray *defaultBoxesSidesNormalized; // @synthesize defaultBoxesSidesNormalized=_defaultBoxesSidesNormalized;
@property(readonly, nonatomic) NSNumber *nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
@property(readonly, nonatomic) NSNumber *networkThreshold; // @synthesize networkThreshold=_networkThreshold;
@property(readonly, nonatomic) NSArray *filterThresholds; // @synthesize filterThresholds=_filterThresholds;
- (id)description;
- (id)initWithURL:(id)arg1;

@end

