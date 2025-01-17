//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVHUDStringGenerator : NSObject
{
    AVPlayer *_player;
    NSNumber *_audioSpatializationMode;
    NSString *_playerItemURL;
    NSString *_assetType;
    NSString *_sessionID;
    NSString *_configurationGroup;
    NSString *_trackFormatDescriptions;
    NSNumber *_displayResolutionHeight;
    NSNumber *_displayResolutionWidth;
    NSNumber *_refreshRate;
    NSString *_videoRange;
    NSNumber *_videoApproximateDisplaySizeHeight;
    NSNumber *_videoApproximateDisplaySizeWidth;
    NSNumber *_presentationSizeHeight;
    NSNumber *_presentationSizeWidth;
    NSNumber *_currentFrameRate;
    NSNumber *_nominalFrameRate;
    NSNumber *_networkBandiwdth;
    NSNumber *_averageVideoBitrate;
    NSNumber *_averageAudioBitrate;
    NSString *_assetTrackInfo;
    NSNumber *_peakIndicatedBitrate;
    NSNumber *_averageIndicatedBitrate;
    NSNumber *_variantIndex;
    NSNumber *_totalFrameDrops;
    NSNumber *_decoderFrameDrops;
    NSNumber *_imageQueueFrameDrops;
    NSNumber *_bufferedVideoPlayed;
    NSNumber *_bufferedVideoRemaining;
    NSString *_customPerfInfo;
    NSNumber *_totalStalls;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    _Bool _spatialDiagnostics;
    _Bool _captureCompleteURI;
    NSString *_formattedDisplayString;
}

+ (id)descriptionStringForTracksOfPlayerItem:(id)arg1;
+ (id)descriptionStringForVideoRangeOfFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (id)descriptionStringForBitRate:(double)arg1;
+ (id)descriptionStringForFormatOfTrack:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *audioSpatializationMode; // @synthesize audioSpatializationMode=_audioSpatializationMode;
@property(readonly, nonatomic) NSNumber *displayResolutionHeight; // @synthesize displayResolutionHeight=_displayResolutionHeight;
@property(readonly, nonatomic) NSNumber *displayResolutionWidth; // @synthesize displayResolutionWidth=_displayResolutionWidth;
@property(nonatomic) long long totalStallCount; // @synthesize totalStallCount=_totalStallCount;
@property(nonatomic) long long prevStallCount; // @synthesize prevStallCount=_prevStallCount;
@property(nonatomic) long long prevVariantIdx; // @synthesize prevVariantIdx=_prevVariantIdx;
@property(nonatomic) _Bool captureCompleteURI; // @synthesize captureCompleteURI=_captureCompleteURI;
@property(nonatomic) _Bool spatialDiagnostics; // @synthesize spatialDiagnostics=_spatialDiagnostics;
@property __weak AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSString *formattedDisplayString; // @synthesize formattedDisplayString=_formattedDisplayString;
- (void)update;
- (void)updateFromPlayerItem;
- (void)updateFromPlayer;
- (void)dealloc;

@end

