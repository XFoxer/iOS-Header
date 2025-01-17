//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionDescriptor-Protocol.h>

@class NSString, NSURL;

@interface NTSectionPlaceholderDescriptor : NSObject <NTSectionDescriptor>
{
    int _promotionCriterion;
    int _readArticlesFilterMethod;
    int _seenArticlesFilterMethod;
    NSString *_actionTitle;
    NSString *_backingTagID;
    unsigned long long _cachedResultCutoffTime;
    NSString *_compactName;
    unsigned long long _fallbackOrder;
    NSString *_identifier;
    unsigned long long _maximumStoriesAllocation;
    unsigned long long _minimumStoriesAllocation;
    NSString *_name;
    NSString *_nameColorDark;
    NSString *_nameColorLight;
    NSString *_personalizationFeatureID;
    NSString *_referralBarName;
    long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    long long _supplementalInterSectionFilterOptions;
    NSURL *_actionURL;
    long long _supplementalIntraSectionFilterOptions;
    NSURL *_nameActionURL;
    NSString *_backgroundColorLight;
    NSString *_backgroundColorDark;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property(readonly, copy, nonatomic) NSString *backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property(readonly, copy, nonatomic) NSURL *nameActionURL; // @synthesize nameActionURL=_nameActionURL;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions; // @synthesize supplementalIntraSectionFilterOptions=_supplementalIntraSectionFilterOptions;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions; // @synthesize supplementalInterSectionFilterOptions=_supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; // @synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod; // @synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod;
@property(readonly, copy, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;
@property(readonly, nonatomic) int readArticlesFilterMethod; // @synthesize readArticlesFilterMethod=_readArticlesFilterMethod;
@property(readonly, nonatomic) int promotionCriterion; // @synthesize promotionCriterion=_promotionCriterion;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *nameColorLight; // @synthesize nameColorLight=_nameColorLight;
@property(readonly, copy, nonatomic) NSString *nameColorDark; // @synthesize nameColorDark=_nameColorDark;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long minimumStoriesAllocation; // @synthesize minimumStoriesAllocation=_minimumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long maximumStoriesAllocation; // @synthesize maximumStoriesAllocation=_maximumStoriesAllocation;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long fallbackOrder; // @synthesize fallbackOrder=_fallbackOrder;
@property(readonly, copy, nonatomic) NSString *compactName; // @synthesize compactName=_compactName;
@property(readonly, nonatomic) unsigned long long cachedResultCutoffTime; // @synthesize cachedResultCutoffTime=_cachedResultCutoffTime;
@property(readonly, nonatomic) NSString *backingTagID; // @synthesize backingTagID=_backingTagID;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 nameColorLight:(id)arg2 nameColorDark:(id)arg3 minimumStoriesAllocation:(unsigned long long)arg4 maximumStoriesAllocation:(unsigned long long)arg5 backingTagID:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

