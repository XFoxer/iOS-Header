//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHUDControlling-Protocol.h>
#import <SpringBoard/_SBHUDHostViewControllerDelegate-Protocol.h>

@class NSString, NSTimer, SBHUDController, UIViewController;
@protocol SBHUDViewControlling;

@interface _SBHUDModel : NSObject <_SBHUDHostViewControllerDelegate, SBHUDControlling>
{
    NSTimer *_dismissalTimer;
    _Bool _dismissed;
    _Bool _dismissing;
    _Bool _presenting;
    _Bool _presented;
    UIViewController<SBHUDViewControlling> *_HUDViewController;
    SBHUDController *_HUDController;
    double _dismissalInterval;
    NSString *_identifier;
}

+ (id)HUDModelForController:(id)arg1 viewController:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double dismissalInterval; // @synthesize dismissalInterval=_dismissalInterval;
@property(nonatomic, setter=setPresented:) _Bool isPresented; // @synthesize isPresented=_presented;
@property(nonatomic, setter=setPresenting:) _Bool isPresenting; // @synthesize isPresenting=_presenting;
@property(nonatomic, setter=setDismissing:) _Bool isDismissing; // @synthesize isDismissing=_dismissing;
@property(nonatomic, setter=setDismissed:) _Bool isDismissed; // @synthesize isDismissed=_dismissed;
@property(readonly, nonatomic) SBHUDController *HUDController; // @synthesize HUDController=_HUDController;
@property(readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController; // @synthesize HUDViewController=_HUDViewController;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)invalidateDismissalTimer;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithDismissalInterval:(double)arg1 animated:(_Bool)arg2;
- (void)presentWithDismissalInterval:(double)arg1;
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic, getter=isDismissalScheduled) _Bool dismissalScheduled;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

