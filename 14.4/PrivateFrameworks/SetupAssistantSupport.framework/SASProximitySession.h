//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUMessageSession, SASProximitySessionTransport;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject
{
    _Bool _connected;
    id <SASProximitySessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_actionQueue;
    SASProximitySessionTransport *_transport;
}

- (void).cxx_destruct;
@property(retain) SASProximitySessionTransport *transport; // @synthesize transport=_transport;
@property(retain) NSObject<OS_dispatch_queue> *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property id <SASProximitySessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAction:(id)arg1;
- (id)actionFromData:(id)arg1;
- (id)sendAction:(id)arg1;
- (void)receivedAction:(id)arg1 response:(CDUnknownBlockType)arg2;
@property(retain) CUMessageSession *sharingMessageSession;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

