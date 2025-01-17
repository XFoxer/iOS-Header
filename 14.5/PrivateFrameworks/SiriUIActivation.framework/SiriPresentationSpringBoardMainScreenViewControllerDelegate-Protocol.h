//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUIActivation/SiriPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, SiriPresentationSpringBoardMainScreenViewController;
@protocol SiriPresentation;

@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
- (_Bool)siriPresentation:(id <SiriPresentation>)arg1 requestsDeviceUnlockWithPassword:(NSString *)arg2;
- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;

@optional
- (void)siriPresentation:(id <SiriPresentation>)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateHomeGestureSharing:(_Bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(_Bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForSwipesOutsideContent:(_Bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapsOutsideContent:(_Bool)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapOutsideContentTo:(_Bool)arg2;
@end

