//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoKit/NSObject-Protocol.h>

@class NSArray;

@protocol NUMediaPlayer <NSObject>
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) long long playbackMode;
@property(nonatomic) double playbackRate;
@property(readonly) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) CDStruct_198678f7 currentTime;
@property(readonly, nonatomic) CDStruct_198678f7 mediaDuration;
@property(readonly, nonatomic) long long playbackState;
- (void)removeObserver:(id)arg1;
- (id)addExternalPlaybackObserver:(void (^)(id <NUMediaPlayer>, _Bool))arg1;
- (id)addPlaybackTimeObserver:(void (^)(id <NUMediaPlayer>, struct))arg1;
- (id)addPlaybackStateObserver:(void (^)(id <NUMediaPlayer>, long long))arg1;
- (void)stepByCount:(long long)arg1;
- (void)seekToTime:(CDStruct_198678f7)arg1 toleranceBefore:(CDStruct_198678f7)arg2 toleranceAfter:(CDStruct_198678f7)arg3 forceSeek:(_Bool)arg4;
- (void)seekToTime:(CDStruct_198678f7)arg1 toleranceBefore:(CDStruct_198678f7)arg2 toleranceAfter:(CDStruct_198678f7)arg3;
- (void)seekToTime:(CDStruct_198678f7)arg1 exact:(_Bool)arg2;
- (void)seekToTime:(CDStruct_198678f7)arg1;
- (void)pause;
- (void)play;
@end

