//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WFNetworkEvent : NSObject
{
    long long _eventType;
    NSDate *_startDate;
    double _DNSDuration;
    double _connectDuration;
    double _requestDuration;
    double _responseDuration;
    unsigned long long _responseSize;
    unsigned long long _HTTPStatusCode;
    long long _errorCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) unsigned long long HTTPStatusCode; // @synthesize HTTPStatusCode=_HTTPStatusCode;
@property(readonly, nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(readonly, nonatomic) double responseDuration; // @synthesize responseDuration=_responseDuration;
@property(readonly, nonatomic) double requestDuration; // @synthesize requestDuration=_requestDuration;
@property(readonly, nonatomic) double connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) double DNSDuration; // @synthesize DNSDuration=_DNSDuration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 error:(id)arg3;
- (id)initWithEventType:(long long)arg1 metrics:(id)arg2;
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 DNSDuration:(double)arg3 connectDuration:(double)arg4 requestDuration:(double)arg5 responseDuration:(double)arg6 responseSize:(unsigned long long)arg7 HTTPStatusCode:(unsigned long long)arg8 errorCode:(long long)arg9;

@end

