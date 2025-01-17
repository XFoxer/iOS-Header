//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFLocalSessionTask.h>

@class NSData, NSError, NSMutableArray, NSObject, NSString;
@protocol OS_nw_protocol_options;

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask
{
    _Bool _webSocketHandshakeCompleted;
    _Bool _readInProgress;
    int _pingSeed;
    long long _maximumMessageSize;
    long long _closeCode;
    NSData *_closeReason;
    NSMutableArray *_pendingSendWork;
    NSMutableArray *_pendingReceiveWork;
    NSMutableArray *_highPriorityPendingWork;
    NSMutableArray *_delegateWork;
    NSError *_webSocketError;
    NSString *_protocolPicked;
    NSObject<OS_nw_protocol_options> *_wsOptions;
}

- (void).cxx_destruct;
@property(readonly, copy) NSData *closeReason; // @synthesize closeReason=_closeReason;
@property(readonly) long long closeCode; // @synthesize closeCode=_closeCode;
@property long long maximumMessageSize; // @synthesize maximumMessageSize=_maximumMessageSize;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)dealloc;
- (void)cancel;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (_Bool)isKindOfClass:(Class)arg1;

@end

