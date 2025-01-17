//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKCardioFitnessClassificationUtilities : NSObject
{
}

+ (id)analyticsStringForLevel:(long long)arg1;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg1 healthStore:(id)arg2;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)arg1 inHealthStore:(id)arg2;
+ (long long)cardioFitnessLevelForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForLevel:(long long)arg1 date:(id)arg2 healthStore:(id)arg3;
+ (id)cardioFitnessDataForLevel:(long long)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)_lookupPropertiesForDate:(id)arg1 healthStore:(id)arg2;
+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)arg1 biologicalSex:(long long)arg2 dateOfBirth:(id)arg3;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)_flattenedThresholdsForLevelData:(id)arg1;
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)_queryCoreMotionClassifications;
+ (id)_parseCoreMotionClassificationData:(id)arg1;
+ (id)_stubbedCardioFitnessLevelData;
+ (id)_cardioFitnessLevels;

@end

