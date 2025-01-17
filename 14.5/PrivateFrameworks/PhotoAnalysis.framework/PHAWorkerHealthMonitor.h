//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject
{
    struct os_unfair_lock_s _lock;
    double _maxScoreRecentnessInterval;
    NSMutableDictionary *_scoresByWorkerType;
    NSMutableDictionary *_cachedAverageScoresByWorkerType;
    NSMutableDictionary *_lastTrimDateByWorkerType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *lastTrimDateByWorkerType; // @synthesize lastTrimDateByWorkerType=_lastTrimDateByWorkerType;
@property(readonly, nonatomic) NSMutableDictionary *cachedAverageScoresByWorkerType; // @synthesize cachedAverageScoresByWorkerType=_cachedAverageScoresByWorkerType;
@property(readonly, nonatomic) NSMutableDictionary *scoresByWorkerType; // @synthesize scoresByWorkerType=_scoresByWorkerType;
@property(nonatomic) double maxScoreRecentnessInterval; // @synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval;
- (id)statusAsDictionary;
- (_Bool)isHealthyForWorkerType:(short)arg1;
- (void)reset;
- (void)recordResultsFromWorkerJob:(id)arg1;
- (float)averageScoreForWorkerType:(short)arg1;
- (_Bool)_isHealthyForWorkerType:(short)arg1;
- (float)_averageScoreForWorkerType:(short)arg1;
- (id)init;
- (float)_calculateAverageScoreForWorkerType:(short)arg1;
- (void)_trimScoresForWorkerType:(short)arg1;
- (_Bool)_needsTrimScoresForWorkerType:(short)arg1;
- (id)_scoresForWorkerType:(short)arg1;

@end

