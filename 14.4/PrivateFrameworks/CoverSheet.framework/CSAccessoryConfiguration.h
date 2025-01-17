//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSDateTimeLayoutAggregating-Protocol.h>
#import <CoverSheet/CSPersistentContentLayoutProviding-Protocol.h>

@class CSLayoutStrategy;

@interface CSAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>
{
    _Bool _showBolt;
    _Bool _staticViewNeeded;
    double _boltPointSize;
    double _ringDiameter;
    double _splashRingDiameter;
    double _lineWidth;
    double _chargePercentFont;
    double _splashRingDiameterSizeXFactor;
    double _splashRingDiameterSizeXXFactor;
    double _splashRingDiameterSizeXXXFactor;
    double _walletBottomOffset;
    double _walletCornerRadius;
    double _staticViewRingDiameter;
    CSLayoutStrategy *_layoutStrategy;
    struct CGSize _boltSize;
    struct CGSize _walletSize;
}

+ (id)staticViewConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(nonatomic) double staticViewRingDiameter; // @synthesize staticViewRingDiameter=_staticViewRingDiameter;
@property(nonatomic) _Bool staticViewNeeded; // @synthesize staticViewNeeded=_staticViewNeeded;
@property(readonly, nonatomic) double walletCornerRadius; // @synthesize walletCornerRadius=_walletCornerRadius;
@property(readonly, nonatomic) double walletBottomOffset; // @synthesize walletBottomOffset=_walletBottomOffset;
@property(readonly, nonatomic) struct CGSize walletSize; // @synthesize walletSize=_walletSize;
@property(nonatomic) double splashRingDiameterSizeXXXFactor; // @synthesize splashRingDiameterSizeXXXFactor=_splashRingDiameterSizeXXXFactor;
@property(nonatomic) double splashRingDiameterSizeXXFactor; // @synthesize splashRingDiameterSizeXXFactor=_splashRingDiameterSizeXXFactor;
@property(nonatomic) double splashRingDiameterSizeXFactor; // @synthesize splashRingDiameterSizeXFactor=_splashRingDiameterSizeXFactor;
@property(nonatomic) double chargePercentFont; // @synthesize chargePercentFont=_chargePercentFont;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double splashRingDiameter; // @synthesize splashRingDiameter=_splashRingDiameter;
@property(nonatomic) double ringDiameter; // @synthesize ringDiameter=_ringDiameter;
@property(readonly, nonatomic) double boltPointSize; // @synthesize boltPointSize=_boltPointSize;
@property(nonatomic) struct CGSize boltSize; // @synthesize boltSize=_boltSize;
@property(readonly, nonatomic) _Bool showBolt; // @synthesize showBolt=_showBolt;
- (double)dateTimeSubtitleMaximumWidth;
- (double)dateTimeMostExtremeTrailingX;
- (double)dateTimeMostExtremeLeadingX;
- (_Bool)containsCenteredDateTimeLayout;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)timeLabelOffsetForScrollPercent:(double)arg1;
- (double)listMinY;
- (double)dateBaselineToListY;
- (double)bottomContentInset;
- (double)windowedAccessoryInset;
- (double)timeLabelBaselineY;
@property(readonly, nonatomic) struct CGRect visibleScreenCoordinatesForSleeve;
- (void)setValuesWithStaticViewNeeded:(_Bool)arg1;
- (id)initWithStaticViewNeeded:(_Bool)arg1;

@end

