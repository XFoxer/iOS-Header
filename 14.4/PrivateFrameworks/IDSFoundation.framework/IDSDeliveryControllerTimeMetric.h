//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric>
{
    double _timeToSend;
    long long _endpointCount;
    _Bool _usedPipeline;
    _Bool _usedMMCS;
    long long _responseCode;
}

@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) _Bool usedMMCS; // @synthesize usedMMCS=_usedMMCS;
@property(readonly, nonatomic) _Bool usedPipeline; // @synthesize usedPipeline=_usedPipeline;
@property(readonly, nonatomic) long long endpointCount; // @synthesize endpointCount=_endpointCount;
@property(readonly, nonatomic) double timeToSend; // @synthesize timeToSend=_timeToSend;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(_Bool)arg4 usedMMCS:(_Bool)arg5 responseCode:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

