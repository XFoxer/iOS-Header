//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface BMRuleExtractor : NSObject
{
    _Bool _shouldStop;
    NSMutableDictionary *_patterns;
    NSArray *_items;
    unsigned long long _basketCount;
}

- (void).cxx_destruct;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(readonly, nonatomic) unsigned long long basketCount; // @synthesize basketCount=_basketCount;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableDictionary *patterns; // @synthesize patterns=_patterns;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 currentDate:(id)arg5 datedBaskets:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)itemSetForItemIndexSet:(id)arg1;
- (unsigned long long)supportOfItemSet:(id)arg1;
- (id)subsetsOfItemset:(id)arg1;
- (void)terminateEarly;
- (id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3;

@end

