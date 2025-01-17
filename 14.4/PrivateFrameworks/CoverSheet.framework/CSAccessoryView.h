//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CSAccessoryConfiguration, _UILegibilitySettings;

@interface CSAccessoryView : CSCoverSheetViewBase
{
    _UILegibilitySettings *_legibilitySettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (_Bool)isReduceTransparencyEnabled;
- (_Bool)isReduceMotionEnabled;
@property(readonly, nonatomic) double animationDurationBeforeDismissal;
@property(readonly, nonatomic) CSAccessoryConfiguration *configuration;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;

@end

