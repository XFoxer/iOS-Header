//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMFQuery, EMFQueryResultOverride, NSArray, NSDictionary;

@interface EMFQueryResult : NSObject
{
    NSArray *_matches;
    EMFQueryResultOverride *_resultOverride;
    EMFQuery *_query;
    NSDictionary *_matchingDocumentWeights;
}

+ (id)_emojiStringForDocumentID:(id)arg1 usingLocaleData:(struct __EmojiLocaleDataWrapper *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *matchingDocumentWeights; // @synthesize matchingDocumentWeights=_matchingDocumentWeights;
@property(readonly, nonatomic) EMFQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) EMFQueryResultOverride *resultOverride; // @synthesize resultOverride=_resultOverride;
- (id)_interpolateOverriddenResultsByOverwriting;
- (id)_interpolateOverriddenResultsByFiltering:(id)arg1;
- (id)_interpolateOverriddenResultsByAppendingAndMoving:(id)arg1;
- (id)_interpolateOverriddenResultsByAppending:(id)arg1;
- (id)_interpolateOverriddenResultsByPrepending:(id)arg1;
- (id)_handleOverrideResultInterpolationForStandardResults:(id)arg1;
- (_Bool)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
- (id)description;
- (id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg1;
- (id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg1;
- (id)emojiMatchesUsingEmojiLocaleData:(const struct __EmojiLocaleDataWrapper *)arg1;
@property(readonly, nonatomic) NSArray *matches; // @synthesize matches=_matches;
- (id)initWithQuery:(id)arg1 matchingDocumentWeights:(id)arg2 resultOverride:(id)arg3;
- (id)initWithQuery:(id)arg1 andMatchingDocumentWeights:(id)arg2;

@end

