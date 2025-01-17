//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDataDelegatePrivate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface AssetSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate>
{
    NSOperationQueue *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSURLSession *_session;
    NSMutableDictionary *_sessions;
}

+ (void)obliterateBackgroundSessionsAndHandleEventStream;
+ (id)defaultSession;
- (void).cxx_destruct;
- (void)_startTaskUsingTaskInfo:(id)arg1 withRequest:(id)arg2;
- (void)_prepareRequestUsingTaskInfo:(id)arg1;
- (void)_prepareDataConsumerUsingTaskInfo:(id)arg1;
- (void)_retryTaskUsingTaskInfo:(id)arg1;
- (void)_reportMetricsForTaskInfo:(id)arg1 withCompletionError:(id)arg2;
- (void)_finishPromiseUsingTaskInfo:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)assetPromiseWithRequest:(id)arg1;
@property(readonly) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

