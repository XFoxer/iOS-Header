//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings
{
    _Bool _enableImagePreheating;
    _Bool _showBordersOnAnimatedContent;
    _Bool _animateContentByDefault;
    _Bool _allowLivePhotoPlayback;
    _Bool _playLivePhotosAsLoops;
    _Bool _allowLoopingVideoPlayback;
    _Bool _allowVideoPlayback;
    _Bool _allowAnimatedImagePlayback;
    double _transitionDuration;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool allowAnimatedImagePlayback; // @synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback;
@property(nonatomic) _Bool allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(nonatomic) _Bool allowLoopingVideoPlayback; // @synthesize allowLoopingVideoPlayback=_allowLoopingVideoPlayback;
@property(nonatomic) _Bool playLivePhotosAsLoops; // @synthesize playLivePhotosAsLoops=_playLivePhotosAsLoops;
@property(nonatomic) _Bool allowLivePhotoPlayback; // @synthesize allowLivePhotoPlayback=_allowLivePhotoPlayback;
@property(nonatomic) _Bool animateContentByDefault; // @synthesize animateContentByDefault=_animateContentByDefault;
@property(nonatomic) _Bool showBordersOnAnimatedContent; // @synthesize showBordersOnAnimatedContent=_showBordersOnAnimatedContent;
@property(nonatomic) _Bool enableImagePreheating; // @synthesize enableImagePreheating=_enableImagePreheating;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void)setDefaultValues;
- (id)parentSettings;

@end

