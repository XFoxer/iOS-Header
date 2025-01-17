//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionMatchData-Protocol.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>
{
    unique_ptr_3ff2d08e _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
    NSArray *_entries;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;
- (long long)visitCountScoreForPageTitleAtTime;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(id)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (void)setAutocompleteTriggers:(const void *)arg1 length:(unsigned long long)arg2;
@property(nonatomic) long long visitCountScore;
@property(nonatomic) long long visitCount;
@property(readonly, nonatomic) _Bool shouldPreload;
@property(readonly, nonatomic) _Bool visitWasClientError;
@property(nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) _Bool containsBookmark;
@property(readonly, nonatomic) struct _HistoryStreamedMatchData *streamData;
- (id)initWithStreamData:(unique_ptr_3ff2d08e *)arg1 entries:(id)arg2;
- (id)initWithLastVisitWasFailure:(_Bool)arg1 visitWasFromThisDevice:(_Bool)arg2 visitWasClientError:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

