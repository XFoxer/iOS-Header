//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMClientContext, HMReportContext, NSArray;

@interface HMBatchRequest : NSObject
{
    NSArray *_requests;
    HMClientContext *_clientContext;
    HMReportContext *_reportContext;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)batchRequestWithExecuteRequests:(id)arg1;
+ (id)batchRequestWithWriteRequests:(id)arg1;
+ (id)batchRequestWithReadRequests:(id)arg1;
+ (_Bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) HMReportContext *reportContext; // @synthesize reportContext=_reportContext;
@property(retain, nonatomic) HMClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end

