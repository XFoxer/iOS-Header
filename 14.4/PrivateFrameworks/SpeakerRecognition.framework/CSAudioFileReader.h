//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSAudioFileReaderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioFileReader : NSObject
{
    struct OpaqueExtAudioFile *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioFileReaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSAudioFileReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;
- (void)dealloc;
- (void)stopRecording;
- (void)_readAudioBufferAndFeed;
- (_Bool)startRecording;
- (_Bool)prepareRecording:(id)arg1;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (id)initWithURL:(id)arg1;

@end

