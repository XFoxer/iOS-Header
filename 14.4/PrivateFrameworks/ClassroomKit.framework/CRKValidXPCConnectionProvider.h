//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CRKValidXPCConnectionProvider : NSObject
{
    NSXPCConnection *_connection;
    CDUnknownBlockType _builder;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType builder; // @synthesize builder=_builder;
- (id)captureConnection;
- (void)tearDownConnection;
- (void)connectionDied:(id)arg1;
- (id)invokeBuilder;
- (id)makeConnection;
- (id)unprotectedConnection;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

