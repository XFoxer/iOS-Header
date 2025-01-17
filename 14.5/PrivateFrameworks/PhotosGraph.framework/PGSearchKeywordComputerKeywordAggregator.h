//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject
{
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}

- (void).cxx_destruct;
- (void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2;
@property(readonly) NSDictionary *aggregatedKeywords;
- (id)init;

@end

