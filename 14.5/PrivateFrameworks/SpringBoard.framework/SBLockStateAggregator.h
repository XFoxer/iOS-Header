//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFAnalyticsClient;

@interface SBLockStateAggregator : NSObject
{
    unsigned long long _lockState;
    SBFAnalyticsClient *_analyticsClient;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak SBFAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
- (void)_updateLockState;
- (_Bool)hasAnyLockState;
- (unsigned long long)lockState;
- (id)description;
- (id)_descriptionForLockState:(unsigned long long)arg1;
- (void)dealloc;
- (id)_initWithAnalyticsClient:(id)arg1;
- (id)init;

@end

