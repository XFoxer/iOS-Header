//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class HKGraphSeries, HKGraphView, HKValueRange, NSArray, UIColor;

@protocol HKGraphViewDelegate <NSObject>
- (void)graphViewExternalSelectionEnd:(HKGraphView *)arg1;
- (void)graphViewDidTapYAxis:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;
- (UIColor *)seriesSelectionLineColorForGraphView:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateSeries:(HKGraphSeries *)arg2 newDataArrived:(_Bool)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (void)graphViewSizeChanged:(HKGraphView *)arg1;
- (NSArray *)graphView:(HKGraphView *)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (long long)stackCountForGraphView:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didFinishUserScrollingToValueRange:(HKValueRange *)arg2;
- (void)graphView:(HKGraphView *)arg1 didUpdateVisibleValueRange:(HKValueRange *)arg2 changeContext:(long long)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(HKValueRange *)arg4;
- (void)graphViewDidEndSelection:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateSelectedPoint:(NSArray *)arg2;
- (void)graphViewDidBeginSelection:(HKGraphView *)arg1;

@optional
- (void)graphView:(HKGraphView *)arg1 startupTime:(long long)arg2;
@end

