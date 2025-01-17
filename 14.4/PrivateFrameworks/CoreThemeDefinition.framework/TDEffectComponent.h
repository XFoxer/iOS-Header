//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, TDEffectRenditionSpec, TDEffectType;

@interface TDEffectComponent : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterTintable;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+ (id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor1;
- (id)CUIEffectParameterBevelStyle;
- (id)CUIEffectParameterTintable;
- (id)CUIEffectParameterSpread;
- (id)CUIEffectParameterSoftenSize;
- (id)CUIEffectParameterBlendMode;
- (id)CUIEffectParameterAngle;
- (id)CUIEffectParameterOffset;
- (id)CUIEffectParameterBlurSize;
- (id)CUIEffectParameterOpacity2;
- (id)CUIEffectParameterOpacity;
- (id)CUIEffectParameterColor2;
- (id)CUIEffectParameterColor1;
- (id)parameterOfType:(unsigned int)arg1;
- (void)addParametersToPreset:(id)arg1;
- (void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3;

// Remaining properties
@property(retain, nonatomic) TDEffectType *effectType; // @dynamic effectType;
@property(nonatomic) _Bool isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) NSSet *parameters; // @dynamic parameters;
@property(retain, nonatomic) TDEffectRenditionSpec *rendition; // @dynamic rendition;

@end

