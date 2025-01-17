//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBSectionSlotCostInfo, NTPBTodayModuleContentRequest;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying>
{
    long long _embedsLimit;
    long long _leadingCellThumbnailSizePreset;
    double _maxHeadlineScale;
    double _minHeadlineScale;
    long long _qualityOfService;
    double _scale;
    double _slotsLimit;
    long long _sourceNameImageSizePreset;
    long long _thumbnailSizePreset;
    NSString *_assetsDirectoryFileURLString;
    unsigned int _dynamicThumbnailSizePresetMinimumHeightInPixels;
    unsigned int _dynamicThumbnailSizePresetMinimumWidthInPixels;
    NSString *_keyboardInputMode;
    NTPBTodayModuleContentRequest *_request;
    NTPBSectionSlotCostInfo *_sectionSlotCostInfo;
    _Bool _allowOnlyWatchEligibleSections;
    _Bool _allowSectionTitles;
    _Bool _fetchWidgetConfig;
    _Bool _preferCompactSectionName;
    _Bool _preferCompactSourceName;
    _Bool _respectsWidgetSlotsLimit;
    _Bool _respectsWidgetVisibleSectionsPerQueueLimit;
    struct {
        unsigned int embedsLimit:1;
        unsigned int leadingCellThumbnailSizePreset:1;
        unsigned int maxHeadlineScale:1;
        unsigned int minHeadlineScale:1;
        unsigned int qualityOfService:1;
        unsigned int scale:1;
        unsigned int slotsLimit:1;
        unsigned int sourceNameImageSizePreset:1;
        unsigned int thumbnailSizePreset:1;
        unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels:1;
        unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels:1;
        unsigned int allowOnlyWatchEligibleSections:1;
        unsigned int allowSectionTitles:1;
        unsigned int fetchWidgetConfig:1;
        unsigned int preferCompactSectionName:1;
        unsigned int preferCompactSourceName:1;
        unsigned int respectsWidgetSlotsLimit:1;
        unsigned int respectsWidgetVisibleSectionsPerQueueLimit:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double maxHeadlineScale; // @synthesize maxHeadlineScale=_maxHeadlineScale;
@property(nonatomic) double minHeadlineScale; // @synthesize minHeadlineScale=_minHeadlineScale;
@property(retain, nonatomic) NTPBTodayModuleContentRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
@property(nonatomic) _Bool allowSectionTitles; // @synthesize allowSectionTitles=_allowSectionTitles;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels; // @synthesize dynamicThumbnailSizePresetMinimumHeightInPixels=_dynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels; // @synthesize dynamicThumbnailSizePresetMinimumWidthInPixels=_dynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) long long leadingCellThumbnailSizePreset; // @synthesize leadingCellThumbnailSizePreset=_leadingCellThumbnailSizePreset;
@property(retain, nonatomic) NSString *assetsDirectoryFileURLString; // @synthesize assetsDirectoryFileURLString=_assetsDirectoryFileURLString;
@property(nonatomic) _Bool respectsWidgetVisibleSectionsPerQueueLimit; // @synthesize respectsWidgetVisibleSectionsPerQueueLimit=_respectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) _Bool allowOnlyWatchEligibleSections; // @synthesize allowOnlyWatchEligibleSections=_allowOnlyWatchEligibleSections;
@property(nonatomic) _Bool fetchWidgetConfig; // @synthesize fetchWidgetConfig=_fetchWidgetConfig;
@property(retain, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo; // @synthesize sectionSlotCostInfo=_sectionSlotCostInfo;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) long long sourceNameImageSizePreset; // @synthesize sourceNameImageSizePreset=_sourceNameImageSizePreset;
@property(nonatomic) long long thumbnailSizePreset; // @synthesize thumbnailSizePreset=_thumbnailSizePreset;
@property(nonatomic) _Bool preferCompactSourceName; // @synthesize preferCompactSourceName=_preferCompactSourceName;
@property(nonatomic) _Bool preferCompactSectionName; // @synthesize preferCompactSectionName=_preferCompactSectionName;
@property(nonatomic) _Bool respectsWidgetSlotsLimit; // @synthesize respectsWidgetSlotsLimit=_respectsWidgetSlotsLimit;
@property(nonatomic) double slotsLimit; // @synthesize slotsLimit=_slotsLimit;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxHeadlineScale;
@property(nonatomic) _Bool hasMinHeadlineScale;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasKeyboardInputMode;
@property(nonatomic) _Bool hasScale;
@property(nonatomic) _Bool hasEmbedsLimit;
@property(nonatomic) _Bool hasAllowSectionTitles;
@property(nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) _Bool hasLeadingCellThumbnailSizePreset;
@property(readonly, nonatomic) _Bool hasAssetsDirectoryFileURLString;
@property(nonatomic) _Bool hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) _Bool hasAllowOnlyWatchEligibleSections;
@property(nonatomic) _Bool hasFetchWidgetConfig;
@property(readonly, nonatomic) _Bool hasSectionSlotCostInfo;
@property(nonatomic) _Bool hasQualityOfService;
@property(nonatomic) _Bool hasSourceNameImageSizePreset;
@property(nonatomic) _Bool hasThumbnailSizePreset;
@property(nonatomic) _Bool hasPreferCompactSourceName;
@property(nonatomic) _Bool hasPreferCompactSectionName;
@property(nonatomic) _Bool hasRespectsWidgetSlotsLimit;
@property(nonatomic) _Bool hasSlotsLimit;

@end

