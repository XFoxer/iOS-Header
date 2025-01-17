//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCHStyleUtilities : NSObject
{
}

+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (_Bool)groupedShadowsForChartModel:(id)arg1;
+ (_Bool)useOutsideParagraphStyleIndexForSeries:(id)arg1 chartType:(id)arg2 layout:(id)arg3;
+ (id)fillForSeries:(id)arg1 chartType:(id)arg2;
+ (id)p_referenceColorForObject:(id)arg1;
+ (id)lineEndForSegmentIndex:(long long)arg1;
+ (unsigned long long)segmentIndexForLineEnd:(id)arg1;
+ (id)uiStringForLabelFormatType:(int)arg1 useShortString:(_Bool)arg2;
+ (id)uiStringForLabelFormatType:(int)arg1;
+ (id)availableStrokes;
+ (void)updateParagraphStylePropertyMapsForMutationLookup:(id)arg1 mutationDictionary:(id)arg2 styleOwner:(id)arg3 indexProperty:(int)arg4 paragraphStyleProperty:(int)arg5 value:(id)arg6;
+ (_Bool)allSeriesInList:(id)arg1 haveExplosionValue:(double)arg2;
+ (void)breakUpFontName:(id)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;
+ (id)stylesheetOfStyles:(id)arg1 nilAllowed:(_Bool)arg2;
+ (id)trendlineColorFromCGColor:(struct CGColor *)arg1;
+ (void)p_adjustTrendlineSaturation:(double *)arg1 brightness:(double *)arg2;
+ (void)convertToSimpleTSDFillsInProperties:(id)arg1 inMap:(id)arg2 context:(id)arg3;
+ (void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(CDUnknownBlockType)arg2;
+ (void)updateStyleState:(id)arg1 forPropertyMutationTuples:(id)arg2;
+ (void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2;
+ (id)chartsNullShadowToDefaultDisabledShadow:(id)arg1;
+ (id)shadowToChartsNullShadow:(id)arg1;
+ (id)defaultShadow;
+ (id)nullShadow;
+ (_Bool)hasShadow:(id)arg1;
+ (id)upgradedShadowPropertyForParagraphStyle:(id)arg1;
+ (_Bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2;
+ (_Bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id *)arg2;
+ (_Bool)p_hasShadow:(id)arg1;
+ (id)nullFill;
+ (_Bool)isNullFill:(id)arg1;
+ (_Bool)hasNoFill:(id)arg1;
+ (id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 styleClass:(Class)arg3;
+ (id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2;
+ (id)tupleToUpdate2_3ExplosionFromValue:(id)arg1 chartInfo:(id)arg2 forStyleOwner:(id)arg3;
+ (double)pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)arg1 chartModel:(id)arg2 bodySize:(struct CGSize)arg3;
+ (double)bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)arg1 chartModel:(id)arg2 bodySize:(struct CGSize)arg3;
+ (double)pieFamilyLabelExplosionMaximumPercentage;
+ (double)pieFamilyLabelExplosionMinimumPercentage;
+ (float)defaultCalloutLineThickness;
+ (double)p_pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)arg1 chartRadius:(double)arg2;
+ (double)p_bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)arg1 chartRadius:(double)arg2;
+ (struct CGSize)bodySizeWithMinimumWedgeExplosionWithChartModel:(id)arg1 bodySize:(struct CGSize)arg2;
+ (float)defaultPieLabelExplosionPercentage;
+ (float)pre2_4DefaultPieLabelExplosionPercentageForCalloutLineCalculation;
+ (_Bool)shouldAnchorLabelsForSeries:(id)arg1 innerRadius:(double)arg2 calloutLineType:(long long)arg3 defaultLabelExplosion:(double)arg4;
+ (_Bool)labelExplosionIsCenteredInWedgeWithInnerRadius:(double)arg1 labelExplosion:(double)arg2;
+ (float)defaultDonutLabelExplosionPercentage;
+ (float)centeredDonutLabelExplosionPercentageWithInnerRadius:(double)arg1;
+ (float)defaultInnerRadiusPercentageForIconRendering;
+ (float)defaultInnerRadiusPercentage;

@end

