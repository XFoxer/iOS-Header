//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVTAvatarPhysicsState, AVTAvatarPose, AVTView, AVTViewUpdater;
@protocol AVTAvatarRecord;

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController
{
    _Bool _isLiveTracking;
    id <AVTAvatarRecord> _avatarRecord;
    AVTView *_avtView;
    AVTAvatarPose *_displayedPose;
    AVTViewUpdater *_viewUpdater;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVTViewUpdater *viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(retain, nonatomic) AVTAvatarPose *displayedPose; // @synthesize displayedPose=_displayedPose;
@property(retain, nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(nonatomic) _Bool isLiveTracking; // @synthesize isLiveTracking=_isLiveTracking;
- (void)_updatePose:(id)arg1 fromPose:(id)arg2 animated:(_Bool)arg3;
- (void)updateForPose:(id)arg1 animated:(_Bool)arg2;
- (void)endFaceTracking;
- (void)beginFaceTrackingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)enableFaceTrackingIfNeeded;
- (void)updatePreviewForRecord:(id)arg1;
@property(readonly, nonatomic) AVTAvatarPhysicsState *currentPhysicsState;
@property(readonly, nonatomic) AVTAvatarPose *currentPose;
- (void)viewDidLoad;
- (id)initWithRecord:(id)arg1;

@end

