//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetFlyInSettings : PTSettings
{
    _Bool _centerFollowsFinger;
    _Bool _animateIconsOnPresentationToo;
    double _iconsFlyInInteractiveResponseMin;
    double _iconsFlyInInteractiveResponseMax;
    double _iconsFlyInInteractiveDampingRatioMin;
    double _iconsFlyInInteractiveDampingRatioMax;
    double _iconsFlyInTension;
    double _iconsFlyInFriction;
    double _slomoRate;
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
}

+ (id)settingsControllerModule;
@property(nonatomic) double distanceExponent; // @synthesize distanceExponent=_distanceExponent;
@property(nonatomic) double effectMultiplier; // @synthesize effectMultiplier=_effectMultiplier;
@property(nonatomic) double baselineDistance; // @synthesize baselineDistance=_baselineDistance;
@property(nonatomic) double slomoRate; // @synthesize slomoRate=_slomoRate;
@property(nonatomic) double iconsFlyInFriction; // @synthesize iconsFlyInFriction=_iconsFlyInFriction;
@property(nonatomic) double iconsFlyInTension; // @synthesize iconsFlyInTension=_iconsFlyInTension;
@property(nonatomic) double iconsFlyInInteractiveDampingRatioMax; // @synthesize iconsFlyInInteractiveDampingRatioMax=_iconsFlyInInteractiveDampingRatioMax;
@property(nonatomic) double iconsFlyInInteractiveDampingRatioMin; // @synthesize iconsFlyInInteractiveDampingRatioMin=_iconsFlyInInteractiveDampingRatioMin;
@property(nonatomic) double iconsFlyInInteractiveResponseMax; // @synthesize iconsFlyInInteractiveResponseMax=_iconsFlyInInteractiveResponseMax;
@property(nonatomic) double iconsFlyInInteractiveResponseMin; // @synthesize iconsFlyInInteractiveResponseMin=_iconsFlyInInteractiveResponseMin;
@property(nonatomic) _Bool animateIconsOnPresentationToo; // @synthesize animateIconsOnPresentationToo=_animateIconsOnPresentationToo;
@property(nonatomic) _Bool centerFollowsFinger; // @synthesize centerFollowsFinger=_centerFollowsFinger;
- (void)setDefaultValues;

@end

