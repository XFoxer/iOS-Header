//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/SBPowerDownViewDelegate-Protocol.h>

@class NSString, SBPowerDownView;
@protocol SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate>
{
    unsigned long long _aggdStartTime;
    _Bool _canAlterScreenBrightness;
    SBPowerDownView *_powerDownView;
    id <SBPowerDownViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBPowerDownViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetScreenBrightness;
- (void)_endTimeTrackingIncludingReportWithKey:(id)arg1;
- (void)_incrementCountForKey:(id)arg1;
- (void)_beginTimeTracking;
- (_Bool)handleLockButtonPress;
- (_Bool)shouldPendAlertItems;
- (_Bool)shouldDisableSiri;
- (_Bool)shouldDisableControlCenter;
- (_Bool)shouldDisableBanners;
- (long long)idleTimerMode;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (_Bool)allowsStackingOverlayContentAbove;
- (void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)powerDownViewDidReceiveCancelButtonAction:(id)arg1;
- (void)powerDownViewDidFireIdleTimer:(id)arg1;
- (void)powerDownViewDidCompleteSlide:(id)arg1;
- (void)powerDownViewDidCancelSlide:(id)arg1;
- (void)powerDownViewDidBeginSlide:(id)arg1;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewWillAnimateOut:(id)arg1;
- (void)powerDownViewWillAnimateIn:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

