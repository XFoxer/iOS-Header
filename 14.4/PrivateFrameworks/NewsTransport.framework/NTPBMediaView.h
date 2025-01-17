//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaView : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_galleryId;
    int _galleryImageCount;
    NSMutableArray *_galleryImageIds;
    int _galleryType;
    NSData *_galleryViewingSessionId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_mediaId;
    int _mediaType;
    NSString *_metadata;
    NSMutableArray *_namedEntities;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    NTPBWidgetEngagement *_widgetEngagement;
    _Bool _adSupportedChannel;
    _Bool _isDigitalReplicaAd;
    _Bool _isNativeAd;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int galleryImageCount:1;
        unsigned int galleryType:1;
        unsigned int mediaType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int adSupportedChannel:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)galleryImageIdsType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(retain, nonatomic) NSData *galleryViewingSessionId; // @synthesize galleryViewingSessionId=_galleryViewingSessionId;
@property(retain, nonatomic) NSString *galleryId; // @synthesize galleryId=_galleryId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableArray *galleryImageIds; // @synthesize galleryImageIds=_galleryImageIds;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) int galleryImageCount; // @synthesize galleryImageCount=_galleryImageCount;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIssueViewData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(readonly, nonatomic) _Bool hasIadNativeCampaignAd;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
@property(readonly, nonatomic) _Bool hasGalleryViewingSessionId;
@property(readonly, nonatomic) _Bool hasGalleryId;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
@property(nonatomic) _Bool hasIsNativeAd;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(readonly, nonatomic) _Bool hasMetadata;
- (id)galleryImageIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)galleryImageIdsCount;
- (void)addGalleryImageIds:(id)arg1;
- (void)clearGalleryImageIds;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (int)StringAsGalleryType:(id)arg1;
- (id)galleryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGalleryType;
@property(nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property(nonatomic) _Bool hasGalleryImageCount;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasMediaId;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

