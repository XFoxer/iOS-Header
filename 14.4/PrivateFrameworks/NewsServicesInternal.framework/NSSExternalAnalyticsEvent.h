//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSExternalAnalyticsEvent-Protocol.h>

@class NSDictionary, NTPBSession;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>
{
    NSDictionary *_requestQueryParameters;
    NTPBSession *_session;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NTPBSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSDictionary *requestQueryParameters; // @synthesize requestQueryParameters=_requestQueryParameters;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2;
- (id)init;

@end

