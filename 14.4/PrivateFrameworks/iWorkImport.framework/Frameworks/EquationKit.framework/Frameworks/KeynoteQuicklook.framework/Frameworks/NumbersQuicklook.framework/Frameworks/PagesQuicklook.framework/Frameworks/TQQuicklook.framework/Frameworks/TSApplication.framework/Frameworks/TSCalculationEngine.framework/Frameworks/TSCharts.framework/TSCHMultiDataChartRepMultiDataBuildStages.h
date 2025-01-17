//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep *mRep;
    struct _NSRange mStages;
    double mTotalDuration;
    double mDuration;
    unsigned long long mCurrentStage;
}

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;
- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=mDuration;
@property(readonly, nonatomic) unsigned long long currentStage; // @synthesize currentStage=mCurrentStage;
- (_Bool)hasStage;
- (void)advanceStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (_Bool)isFadingInLayers;
- (_Bool)isLastStageBackgroundOnly;
- (_Bool)isBackgroundOnly;
- (_Bool)isBackgroundOnlyStage:(unsigned long long)arg1;
- (id)chartLayout;
- (void)setupLayoutDataSetIndexForNextStage;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;

@end

