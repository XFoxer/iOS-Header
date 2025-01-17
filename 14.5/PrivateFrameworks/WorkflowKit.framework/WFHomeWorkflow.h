//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTriggerActionsSetsUISummary, NSArray, NSData, NSString, WFWorkflow;

@interface WFHomeWorkflow : NSObject
{
    WFWorkflow *_cachedWorkflow;
    NSData *_data;
    HFTriggerActionsSetsUISummary *_actionSetsSummary;
}

+ (void)setCachedHomes:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HFTriggerActionsSetsUISummary *actionSetsSummary; // @synthesize actionSetsSummary=_actionSetsSummary;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)debugDescription;
- (id)workflowWithEnvironment:(long long)arg1 error:(id *)arg2;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)arg1;
- (id)triggerActionSetsBuilders;
@property(readonly, nonatomic) _Bool requiresDeviceUnlockEnsuringHomesAreLoaded;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
@property(readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property(readonly, copy, nonatomic) NSArray *summaryIconNames;
@property(readonly, copy, nonatomic) NSString *summaryString;
- (id)initWithData:(id)arg1;

@end

