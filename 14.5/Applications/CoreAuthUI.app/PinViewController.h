//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitionViewController.h"

#import "PinViewDelegate-Protocol.h"

@class NSNumber, PinView, _UIBackdropView;

@interface PinViewController : TransitionViewController <PinViewDelegate>
{
    NSNumber *_pinLength;
    PinView *_pinView;
    _UIBackdropView *_blurView;
    long long _currentInterfaceStyle;
    _Bool _ctkPin;
    NSNumber *_pinMaxLength;
    NSNumber *_pinMinLength;
    NSNumber *_pinCharset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ctkPin; // @synthesize ctkPin=_ctkPin;
@property(readonly, nonatomic) NSNumber *pinCharset; // @synthesize pinCharset=_pinCharset;
@property(readonly, nonatomic) NSNumber *pinMinLength; // @synthesize pinMinLength=_pinMinLength;
@property(readonly, nonatomic) NSNumber *pinMaxLength; // @synthesize pinMaxLength=_pinMaxLength;
- (void)pinCancelled;
- (void)pinEntered:(id)arg1;
- (void)didReceiveAuthenticationData;
- (void)_updateCurrentAppearanceIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)_backdropStyle;
- (id)_createBlurView;
- (void)loadView;

@end

