//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSleepDurationSeries.h>

@class NSString;

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries
{
    double _averageValue;
    NSString *_averageDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *averageDescription; // @synthesize averageDescription=_averageDescription;
@property(nonatomic) double averageValue; // @synthesize averageValue=_averageValue;
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (long long)overlayType;
- (void)setAverageValue:(double)arg1 averageDescription:(id)arg2;
- (id)init;

@end

