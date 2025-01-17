//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDCoreAnalyticsLogging-Protocol.h>

@class NSNumber, NSString;

@interface HMDCloudManagerModelFailureEvent : HMDLogEvent <HMDCoreAnalyticsLogging>
{
    NSString *_model;
    NSNumber *_failureCode;
    NSString *_errorDomain;
    NSNumber *_errorCode;
}

- (void).cxx_destruct;
@property(readonly, copy) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, copy) NSNumber *failureCode; // @synthesize failureCode=_failureCode;
@property(readonly, copy) NSString *model; // @synthesize model=_model;
- (id)attributeDescriptions;
- (id)serializedEvent;
- (id)eventName;
- (id)initWithModel:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;

@end

