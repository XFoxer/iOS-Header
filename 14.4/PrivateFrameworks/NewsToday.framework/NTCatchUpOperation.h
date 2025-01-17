//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSDate, NSDictionary, NSMutableArray, NTCatchUpOperationForYouFetchInfo, NTCatchUpOperationForYouRequest, NTCatchUpOperationResults;
@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration;

@interface NTCatchUpOperation : FCOperation
{
    _Bool _forYouEnabled;
    id <FCNewsAppConfiguration> _appConfiguration;
    id <FCContentContext> _contentContext;
    id <FCFeedPersonalizing> _feedPersonalizer;
    NSDictionary *_todayConfigOperationHeldRecordsByType;
    NTCatchUpOperationForYouRequest *_forYouRequest;
    NSDictionary *_resultsByArticleListID;
    NSDictionary *_resultsByArticleIDsRequestID;
    NTCatchUpOperationResults *_forYouResults;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSDate *_fetchDate;
    NSMutableArray *_articleListRequests;
    NSMutableArray *_articleIDsRequests;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *articleIDsRequests; // @synthesize articleIDsRequests=_articleIDsRequests;
@property(retain, nonatomic) NSMutableArray *articleListRequests; // @synthesize articleListRequests=_articleListRequests;
@property(copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(copy, nonatomic) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // @synthesize forYouFetchInfo=_forYouFetchInfo;
@property(copy, nonatomic) NTCatchUpOperationResults *forYouResults; // @synthesize forYouResults=_forYouResults;
@property(copy, nonatomic) NSDictionary *resultsByArticleIDsRequestID; // @synthesize resultsByArticleIDsRequestID=_resultsByArticleIDsRequestID;
@property(copy, nonatomic) NSDictionary *resultsByArticleListID; // @synthesize resultsByArticleListID=_resultsByArticleListID;
@property(nonatomic, getter=isForYouEnabled) _Bool forYouEnabled; // @synthesize forYouEnabled=_forYouEnabled;
@property(copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest; // @synthesize forYouRequest=_forYouRequest;
@property(retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType; // @synthesize todayConfigOperationHeldRecordsByType=_todayConfigOperationHeldRecordsByType;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (void)addArticleIDsRequest:(id)arg1;
- (void)addArticleListRequest:(id)arg1;
- (id)init;

@end

