//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSString;

@interface NTPBFeedItem : PBCodable <NSCopying>
{
    long long _bodyTextLength;
    unsigned long long _contentType;
    unsigned long long _feedHalfLifeMilliseconds;
    double _globalUserFeedback;
    long long _minimumNewsVersion;
    unsigned long long _order;
    unsigned long long _publishDateMilliseconds;
    long long _publisherArticleVersion;
    NSString *_articleID;
    NSString *_clusterID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *_conversionStats;
    NSString *_feedID;
    NSString *_parentIssueID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    NSString *_sourceArticleListID;
    NSString *_sourceChannelID;
    NSMutableArray *_topicIDs;
    _Bool _hasAudioTrack;
    _Bool _hasThumbnail;
    _Bool _hasVideo;
    _Bool _isBundlePaid;
    _Bool _isEvergreen;
    _Bool _isExplicitContent;
    _Bool _isFeatured;
    _Bool _isFromBlockedStorefront;
    _Bool _isHiddenFromAutoFavorites;
    _Bool _isPaid;
    struct {
        unsigned int bodyTextLength:1;
        unsigned int contentType:1;
        unsigned int feedHalfLifeMilliseconds:1;
        unsigned int globalUserFeedback:1;
        unsigned int minimumNewsVersion:1;
        unsigned int order:1;
        unsigned int publishDateMilliseconds:1;
        unsigned int publisherArticleVersion:1;
        unsigned int hasAudioTrack:1;
        unsigned int hasThumbnail:1;
        unsigned int hasVideo:1;
        unsigned int isBundlePaid:1;
        unsigned int isEvergreen:1;
        unsigned int isExplicitContent:1;
        unsigned int isFeatured:1;
        unsigned int isFromBlockedStorefront:1;
        unsigned int isHiddenFromAutoFavorites:1;
        unsigned int isPaid:1;
    } _has;
}

+ (Class)topicIDsType;
@property(retain, nonatomic) NSString *sourceArticleListID; // @synthesize sourceArticleListID=_sourceArticleListID;
@property(nonatomic) _Bool isEvergreen; // @synthesize isEvergreen=_isEvergreen;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *conversionStats; // @synthesize conversionStats=_conversionStats;
@property(nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
@property(nonatomic) _Bool isFeatured; // @synthesize isFeatured=_isFeatured;
@property(nonatomic) long long bodyTextLength; // @synthesize bodyTextLength=_bodyTextLength;
@property(nonatomic) _Bool isBundlePaid; // @synthesize isBundlePaid=_isBundlePaid;
@property(retain, nonatomic) NSString *parentIssueID; // @synthesize parentIssueID=_parentIssueID;
@property(nonatomic) _Bool isHiddenFromAutoFavorites; // @synthesize isHiddenFromAutoFavorites=_isHiddenFromAutoFavorites;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores; // @synthesize scores=_scores;
@property(nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(retain, nonatomic) NSMutableArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(nonatomic) _Bool isExplicitContent; // @synthesize isExplicitContent=_isExplicitContent;
@property(nonatomic) _Bool isFromBlockedStorefront; // @synthesize isFromBlockedStorefront=_isFromBlockedStorefront;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(retain, nonatomic) NSString *sourceChannelID; // @synthesize sourceChannelID=_sourceChannelID;
@property(retain, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(nonatomic) double globalUserFeedback; // @synthesize globalUserFeedback=_globalUserFeedback;
@property(nonatomic) unsigned long long feedHalfLifeMilliseconds; // @synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds;
@property(nonatomic) unsigned long long publishDateMilliseconds; // @synthesize publishDateMilliseconds=_publishDateMilliseconds;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceArticleListID;
@property(nonatomic) _Bool hasIsEvergreen;
@property(readonly, nonatomic) _Bool hasConversionStats;
@property(nonatomic) _Bool hasHasAudioTrack;
@property(nonatomic) _Bool hasIsFeatured;
@property(nonatomic) _Bool hasBodyTextLength;
@property(nonatomic) _Bool hasIsBundlePaid;
@property(readonly, nonatomic) _Bool hasParentIssueID;
@property(nonatomic) _Bool hasIsHiddenFromAutoFavorites;
@property(readonly, nonatomic) _Bool hasScores;
@property(nonatomic) _Bool hasPublisherArticleVersion;
@property(nonatomic) _Bool hasHasVideo;
@property(nonatomic) _Bool hasIsPaid;
- (id)topicIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicIDsCount;
- (void)addTopicIDs:(id)arg1;
- (void)clearTopicIDs;
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) _Bool hasMinimumNewsVersion;
@property(nonatomic) _Bool hasIsExplicitContent;
@property(nonatomic) _Bool hasIsFromBlockedStorefront;
@property(nonatomic) _Bool hasHasThumbnail;
@property(readonly, nonatomic) _Bool hasSourceChannelID;
@property(readonly, nonatomic) _Bool hasClusterID;
@property(nonatomic) _Bool hasGlobalUserFeedback;
@property(nonatomic) _Bool hasFeedHalfLifeMilliseconds;
@property(nonatomic) _Bool hasPublishDateMilliseconds;
@property(nonatomic) _Bool hasOrder;
@property(readonly, nonatomic) _Bool hasArticleID;
@property(readonly, nonatomic) _Bool hasFeedID;
- (void)dealloc;

@end

