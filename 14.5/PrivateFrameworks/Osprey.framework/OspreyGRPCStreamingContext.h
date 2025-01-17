//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Osprey/OspreyClientStreamingContext-Protocol.h>

@class NSInputStream, NSString, OspreyBufferedOutputStream, OspreyMessageReader, OspreyMessageWriter;
@protocol OS_dispatch_queue;

@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
    OspreyMessageReader *_messageReader;
    OspreyMessageWriter *_messageWriter;
    NSInputStream *_inputStream;
    OspreyBufferedOutputStream *_outputStream;
    _Bool _closed;
    _Bool _compressionEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
- (void)_writeFrame:(id)arg1 compressed:(_Bool)arg2 error:(id *)arg3;
- (void)handleResponseData:(id)arg1;
- (void)completeWithError:(id)arg1;
- (void)bindToUrlRequest:(id)arg1;
- (void)finishWriting;
- (void)writeFrame:(id)arg1 compressed:(_Bool)arg2;
- (void)writeFrame:(id)arg1;
- (id)initWithQueue:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

