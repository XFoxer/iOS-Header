//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>

@class CSAudioStartStreamOption, CSAudioStreamRequest, NSString, NSUUID;
@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate>
{
    _Bool _scheduledFutureSample;
    _Bool _streaming;
    id <CSAudioStreamProviding> _streamProvider;
    id <CSAudioStreamProvidingDelegate> _delegate;
    unsigned long long _lastForwardedSampleCount;
    NSString *_name;
    CSAudioStreamRequest *_streamRequest;
    NSString *_UUID;
    CSAudioStartStreamOption *_startStreamOption;
    NSUUID *_streamingUUID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *streamingUUID; // @synthesize streamingUUID=_streamingUUID;
@property _Bool streaming; // @synthesize streaming=_streaming;
@property(retain, nonatomic) CSAudioStartStreamOption *startStreamOption; // @synthesize startStreamOption=_startStreamOption;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) CSAudioStreamRequest *streamRequest; // @synthesize streamRequest=_streamRequest;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool scheduledFutureSample; // @synthesize scheduledFutureSample=_scheduledFutureSample;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioStreamProviding> streamProvider; // @synthesize streamProvider=_streamProvider;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (_Bool)isNarrowBand;
- (id)recordSettings;
- (_Bool)isStreaming;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

