//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellIterating-Protocol.h>
#import <TSTables/TSTCellRegionIterating-Protocol.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSIndexSet, NSString, TSTCategoryTranslator, TSTCell, TSTCellRegion, TSTColumnRowUIDMap, TSTGroupBy, TSTSummaryCellVendor, TSTTableDataStore, TSTTableInfo, TSTTableTile, TSTTableTileRowInfo;
@protocol TSTCellRegionIterating;

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating>
{
    struct unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::__1::hash<TSUViewColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, std::__1::allocator<std::__1::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>> _mapFromViewToBaseColumnInCurrentRow;
    TSTCell *_tempSummaryCell;
    _Bool _isSummaryRow;
    _Bool _isLabelRow;
    unsigned char _groupLevel;
    _Bool _rightToLeft;
    _Bool _terminated;
    unsigned short _categoryColumnIndex;
    unsigned int _curRowIndex;
    unsigned int _baseRowIndex;
    TSTTableInfo *_info;
    TSTGroupBy *_groupBy;
    TSTCategoryTranslator *_translator;
    TSTTableDataStore *_baseDataStore;
    TSTColumnRowUIDMap *_baseMap;
    TSTColumnRowUIDMap *_viewMap;
    TSTSummaryCellVendor *_summaryCellVendor;
    TSTColumnRowUIDMap *_summaryMap;
    TSTCellRegion *_region;
    NSObject<TSTCellRegionIterating> *_regionIterator;
    unsigned long long _searchMask;
    struct TSUCellCoord _curCellID;
    TSTTableTile *_baseTile;
    TSTTableTileRowInfo *_baseRow;
    TSTCell *_cell;
    NSIndexSet *_populatedColumnsForGroupLevel1;
    NSIndexSet *_populatedColumnsForGroupLevel2;
    NSIndexSet *_populatedColumnsForGroupLevel3;
    NSIndexSet *_populatedColumnsForGroupLevel4;
    NSIndexSet *_populatedColumnsForGroupLevel5;
    NSIndexSet *_viewColumnIndexesInCurrentRow;
    UUIDData_5fbc143e _uuid;
    struct _NSRange _baseTileRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *viewColumnIndexesInCurrentRow; // @synthesize viewColumnIndexesInCurrentRow=_viewColumnIndexesInCurrentRow;
@property(retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel5; // @synthesize populatedColumnsForGroupLevel5=_populatedColumnsForGroupLevel5;
@property(retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel4; // @synthesize populatedColumnsForGroupLevel4=_populatedColumnsForGroupLevel4;
@property(retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel3; // @synthesize populatedColumnsForGroupLevel3=_populatedColumnsForGroupLevel3;
@property(retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel2; // @synthesize populatedColumnsForGroupLevel2=_populatedColumnsForGroupLevel2;
@property(retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel1; // @synthesize populatedColumnsForGroupLevel1=_populatedColumnsForGroupLevel1;
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(nonatomic) _Bool rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(readonly, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) TSTTableTileRowInfo *baseRow; // @synthesize baseRow=_baseRow;
@property(nonatomic) struct _NSRange baseTileRange; // @synthesize baseTileRange=_baseTileRange;
@property(retain, nonatomic) TSTTableTile *baseTile; // @synthesize baseTile=_baseTile;
@property(nonatomic) unsigned int baseRowIndex; // @synthesize baseRowIndex=_baseRowIndex;
@property(nonatomic) UUIDData_5fbc143e uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned char groupLevel; // @synthesize groupLevel=_groupLevel;
@property(nonatomic) _Bool isLabelRow; // @synthesize isLabelRow=_isLabelRow;
@property(nonatomic) _Bool isSummaryRow; // @synthesize isSummaryRow=_isSummaryRow;
@property(readonly, nonatomic) unsigned short categoryColumnIndex; // @synthesize categoryColumnIndex=_categoryColumnIndex;
@property(nonatomic) unsigned int curRowIndex; // @synthesize curRowIndex=_curRowIndex;
@property(nonatomic) struct TSUCellCoord curCellID; // @synthesize curCellID=_curCellID;
@property(nonatomic) unsigned long long searchMask; // @synthesize searchMask=_searchMask;
@property(readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // @synthesize regionIterator=_regionIterator;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) __weak TSTColumnRowUIDMap *summaryMap; // @synthesize summaryMap=_summaryMap;
@property(readonly, nonatomic) __weak TSTSummaryCellVendor *summaryCellVendor; // @synthesize summaryCellVendor=_summaryCellVendor;
@property(readonly, nonatomic) __weak TSTColumnRowUIDMap *viewMap; // @synthesize viewMap=_viewMap;
@property(readonly, nonatomic) __weak TSTColumnRowUIDMap *baseMap; // @synthesize baseMap=_baseMap;
@property(readonly, nonatomic) __weak TSTTableDataStore *baseDataStore; // @synthesize baseDataStore=_baseDataStore;
@property(readonly, nonatomic) TSTCategoryTranslator *translator; // @synthesize translator=_translator;
@property(readonly, nonatomic) __weak TSTGroupBy *groupBy; // @synthesize groupBy=_groupBy;
@property(readonly, nonatomic) TSTTableInfo *info; // @synthesize info=_info;
- (void)terminate;
- (_Bool)getNextCellData:(id *)arg1;
- (id)nextCellData;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (_Bool)p_searchSummaryVendorCell:(id)arg1 searchFlags:(unsigned long long)arg2;
- (id)tempSummaryCell;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;

@end

