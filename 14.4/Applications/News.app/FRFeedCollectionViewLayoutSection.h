//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FRAdjustableIndexMap, FRFeedCollectionViewLayoutSectionDescriptor, NSMapTable, NSMutableSet, NSSet, NSString;

@interface FRFeedCollectionViewLayoutSection : NSObject <NSCopying>
{
    _Bool _frozen;
    NSString *_sectionID;
    NSString *_bookmarkableIdentifier;
    FRFeedCollectionViewLayoutSectionDescriptor *_sectionDescriptor;
    long long _unadjustedContentHeight;
    long long _countOfLayoutInfos;
    NSMutableSet *_mutableUpdatedLayoutInfoIDs;
    FRAdjustableIndexMap *_indexesToRegionIDs;
    FRAdjustableIndexMap *_indexesToLayoutInfoIDs;
    FRAdjustableIndexMap *_yOriginsToRegionIDArrays;
    NSMapTable *_layoutInfoIDsToRegionIDs;
    NSMapTable *_regionIDsToRegionIDArrays;
    NSMapTable *_regionsByID;
}

+ (_Bool)hasUniqueLayoutInfoIDsAcrossSections:(id)arg1;
+ (id)fr_groupGapSectionWithGroupGap:(id)arg1 feedSettings:(id)arg2;
+ (id)fr_groupGapSectionWithIdentifier:(id)arg1 feedSettings:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *regionsByID; // @synthesize regionsByID=_regionsByID;
@property(retain, nonatomic) NSMapTable *regionIDsToRegionIDArrays; // @synthesize regionIDsToRegionIDArrays=_regionIDsToRegionIDArrays;
@property(retain, nonatomic) NSMapTable *layoutInfoIDsToRegionIDs; // @synthesize layoutInfoIDsToRegionIDs=_layoutInfoIDsToRegionIDs;
@property(retain, nonatomic) FRAdjustableIndexMap *yOriginsToRegionIDArrays; // @synthesize yOriginsToRegionIDArrays=_yOriginsToRegionIDArrays;
@property(retain, nonatomic) FRAdjustableIndexMap *indexesToLayoutInfoIDs; // @synthesize indexesToLayoutInfoIDs=_indexesToLayoutInfoIDs;
@property(retain, nonatomic) FRAdjustableIndexMap *indexesToRegionIDs; // @synthesize indexesToRegionIDs=_indexesToRegionIDs;
@property(retain, nonatomic) NSMutableSet *mutableUpdatedLayoutInfoIDs; // @synthesize mutableUpdatedLayoutInfoIDs=_mutableUpdatedLayoutInfoIDs;
@property(nonatomic) long long countOfLayoutInfos; // @synthesize countOfLayoutInfos=_countOfLayoutInfos;
@property(nonatomic) long long unadjustedContentHeight; // @synthesize unadjustedContentHeight=_unadjustedContentHeight;
@property(readonly, nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(copy, nonatomic) FRFeedCollectionViewLayoutSectionDescriptor *sectionDescriptor; // @synthesize sectionDescriptor=_sectionDescriptor;
@property(readonly, copy, nonatomic) NSString *bookmarkableIdentifier; // @synthesize bookmarkableIdentifier=_bookmarkableIdentifier;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)debugDescription;
- (_Bool)assertValid;
- (long long)_accumulatedHeightOfRegionIDArray:(id)arg1;
- (void)_setArrayOfRegionIDs:(id)arg1 atYOrigin:(long long)arg2;
- (long long)_heightOfLastRegionIDInArray:(id)arg1;
- (long long)_yOriginToInsertRegionAtRegionIndex:(long long)arg1;
- (id)_retrieveOrCreateEmptyArrayOfRegionIDsAtYOrigin:(long long)arg1;
- (long long)_indexPathOfFirstItemToInsertRegionAtRegionIndex:(long long)arg1;
- (id)_firstRegionIndexCoveringRelativeYOrigin:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double maxY;
@property(readonly, nonatomic) double midY;
@property(readonly, nonatomic) double minY;
@property(readonly, nonatomic) double maxX;
@property(readonly, nonatomic) double midX;
@property(readonly, nonatomic) double minX;
- (_Bool)hasUniqueLayoutInfoIDsAcrossSectionAndRegions:(id)arg1;
- (void)freeze;
@property(readonly, nonatomic) NSSet *updatedLayoutInfoIDs;
- (void)clearUpdatedLayoutInfoIDs;
- (void)markLayoutInfoIDAsUpdated:(id)arg1;
- (id)windowedRegionEnumeratorStartingAtIndex:(long long)arg1;
- (id)regionEnumeratorStartingSearchAtRelativeYOrigin:(long long)arg1;
- (id)reverseRegionEnumeratorStartingAtIndex:(long long)arg1;
- (id)regionEnumeratorStartingAtIndex:(long long)arg1;
- (id)layoutInfoEnumeratorStartingSearchAtRelativeYOrigin:(long long)arg1;
- (id)reverseLayoutInfoEnumerator;
- (id)reverseLayoutInfoEnumeratorStartingAtIndex:(long long)arg1;
- (id)layoutInfoEnumeratorStartingAtIndex:(long long)arg1;
- (id)layoutInfoEnumerator;
- (id)allLayoutInfoIDs;
- (id)supplementaryLayoutAttributesAdjustedToBeInSectionIndex:(long long)arg1;
- (long long)relativeYOriginOfLayoutInfoID:(id)arg1;
- (id)layoutInfoForID:(id)arg1;
- (id)layoutInfoAtIndex:(long long)arg1;
- (id)layoutInfoIDAtIndex:(long long)arg1;
- (long long)indexOfLayoutInfoID:(id)arg1;
- (long long)contentRelativeYOriginOfRegionID:(id)arg1;
- (long long)indexOfRegionID:(id)arg1;
- (id)lastRegionID;
- (id)firstRegionID;
- (id)lastLayoutInfoID;
- (id)firstLayoutInfoID;
- (id)regionContainingLayoutInfoID:(id)arg1;
- (unsigned long long)indexOfRegionContainingLayoutInfoID:(id)arg1;
- (id)regionWithID:(id)arg1;
- (id)regionAtIndex:(long long)arg1;
- (void)setDescriptor:(id)arg1;
- (void)removeRegionWithID:(id)arg1;
- (void)removeRegionAtIndex:(long long)arg1;
- (void)addRegionsToBottom:(id)arg1;
- (void)addRegionsToTop:(id)arg1;
- (void)insertRegions:(id)arg1 startingAtIndex:(long long)arg2;
- (_Bool)_insertRegion:(id)arg1 atIndex:(long long)arg2;
- (void)insertRegion:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) long long contentHeight;
@property(readonly, nonatomic) long long countOfRegions;
- (id)copyWithUpdatedSectionDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 descriptor:(id)arg2;
- (id)initWithDescriptor:(id)arg1;
- (id)init;
- (unsigned long long)fr_sectionInvalidatesScreenful;
- (id)headlinesInSection;
- (id)headlinesIDsInSection;
- (_Bool)regionNearbyWithAdsBelowRegionIndex:(long long)arg1 withinNumberOfScreenfuls:(long long)arg2;
- (_Bool)regionNearbyWithAdsAboveRegionIndex:(long long)arg1 withinNumberOfScreenfuls:(long long)arg2;
- (_Bool)regionNearbyWithAdsInOrder:(unsigned long long)arg1 startingAtRegionIndex:(long long)arg2 withinNumberOfscreenfuls:(long long)arg3;
- (id)fr_insertAdOrWidgetRegionsIfNeededFromRegionWithID:(id)arg1 toRegionWithID:(id)arg2 inDirection:(unsigned long long)arg3 minimumSpacingBetweenAdOrWidgetItems:(double)arg4 feedSettings:(id)arg5 insertionCallback:(CDUnknownBlockType)arg6;
- (id)fr_firstRegionIDWithoutInvalidatingScreenfulWalkingInOrder:(unsigned long long)arg1 fromRegionID:(id)arg2;

@end

