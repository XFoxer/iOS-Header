//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

#import "DirectionsStartEndCell-Protocol.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface DirectionsStartEndContentView : MapsThemeView <DirectionsStartEndCell>
{
    long long _identifier;
    UILabel *_overviewLabel;
    UILabel *_subtitleLabel;
    UIImageView *_pinView;
    _Bool _isDimmedStep;
}

+ (id)_subtitleForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4;
+ (id)_overviewTitleForWaypoint:(id)arg1 route:(id)arg2;
+ (id)defaultIconImageName;
+ (unsigned long long)iconSize;
+ (double)labelSpacing;
+ (id)subtitleDefaultFont;
+ (CDUnknownBlockType)subtitleFontProvider;
+ (CDUnknownBlockType)overviewFontProvider;
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setPinImageForWaypoint:(id)arg1;
- (id)_labelColor;
- (double)_dimAlpha;
- (void)_updateStyleValuesFromTheme;
- (void)setIsDimmedStep:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2 fontProvider:(CDUnknownBlockType)arg3;
- (double)_heightForAttributedText:(id)arg1 width:(double)arg2;
- (double)heightForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4 width:(double)arg5;
- (void)configureForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4;
- (double)_bottomPaddingUsingFont:(id)arg1 metrics:(CDStruct_afa449f9)arg2;
- (double)_topPaddingUsingFont:(id)arg1 metrics:(CDStruct_afa449f9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

