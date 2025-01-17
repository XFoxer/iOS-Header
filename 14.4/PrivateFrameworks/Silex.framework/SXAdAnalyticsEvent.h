//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXAdAnalyticsEvent : SXAnalyticsEvent
{
    NSString *_adCampaign;
    NSString *_adLine;
    NSString *_adCreative;
    NSString *_impressionIdentifier;
    double _impressionThreshold;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(readonly, nonatomic) NSString *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(readonly, nonatomic) NSString *adCreative; // @synthesize adCreative=_adCreative;
@property(readonly, nonatomic) NSString *adLine; // @synthesize adLine=_adLine;
@property(readonly, nonatomic) NSString *adCampaign; // @synthesize adCampaign=_adCampaign;
- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5;

@end

