//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMBehaviorRetriever, CNContactStore, NSUserDefaults, _CDInteractionStore, _PSRuleRankingMLModel;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject
{
    BMBehaviorRetriever *_behaviorRetriever;
    _CDInteractionStore *_interactionStore;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    CNContactStore *_contactStore;
    NSUserDefaults *_ruleOverlapFeedbackDefaults;
    _PSRuleRankingMLModel *_ruleRankingModel;
}

- (void).cxx_destruct;
@property(retain) _PSRuleRankingMLModel *ruleRankingModel; // @synthesize ruleRankingModel=_ruleRankingModel;
@property(retain, nonatomic) NSUserDefaults *ruleOverlapFeedbackDefaults; // @synthesize ruleOverlapFeedbackDefaults=_ruleOverlapFeedbackDefaults;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // @synthesize behaviorRetriever=_behaviorRetriever;
- (id)interactionStoreEventsSinceDate:(id)arg1;
- (id)sharesheetFeedbackEventsSinceDate:(id)arg1;
- (int)bucketedValue:(int)arg1;
- (id)contextItemsFromEvent:(id)arg1;
- (id)constantPETFeaturesFromContextItems:(id)arg1;
- (id)constantFeaturesFromContextItems:(id)arg1;
- (_Bool)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2;
- (id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (id)feedbackPETPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2;
- (_Bool)wasInteractionAmongSuggestLess:(id)arg1;
- (_Bool)doesSuggestionProxyMatch:(id)arg1 withInteraction:(id)arg2;
- (id)getInteractionRecipientFromInteraction:(id)arg1;
- (void)modelAccuracyLogging:(id)arg1 WithMatchingInteraction:(id)arg2;
- (id)getInteractionModelScoreForEvent:(id)arg1 forInteractionRecipients:(id)arg2;
- (id)loggingTrainDataForContactFillerModel:(id)arg1 withMatchingInteraction:(id)arg2;
- (id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2;
- (id)getSessionID;
- (void)reviewLastDayOfShares;
- (void)writeRecordObjcWithData:(id)arg1;
- (id)init;

@end

