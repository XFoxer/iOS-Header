//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSArray;

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter
{
    NSArray *_rangeDataForAverage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rangeDataForAverage; // @synthesize rangeDataForAverage=_rangeDataForAverage;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (void)setCurrentVisibleAverageNumber:(id)arg1 averageForInBed:(_Bool)arg2;
- (id)init;

@end

