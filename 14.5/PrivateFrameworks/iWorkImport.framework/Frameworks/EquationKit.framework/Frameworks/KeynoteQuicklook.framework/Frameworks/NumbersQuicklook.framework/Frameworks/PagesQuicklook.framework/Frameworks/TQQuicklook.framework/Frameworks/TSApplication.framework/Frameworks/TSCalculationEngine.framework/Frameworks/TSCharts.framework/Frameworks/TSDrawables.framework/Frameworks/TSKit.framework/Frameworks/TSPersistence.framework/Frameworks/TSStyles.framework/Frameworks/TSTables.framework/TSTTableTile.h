//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSTCompatibilityVersionProviding-Protocol.h>

@class NSIndexSet, NSPointerArray;

@interface TSTTableTile : TSPObject <TSTCompatibilityVersionProviding>
{
    unsigned char _storageVersion;
    _Bool _lastSavedInBNC;
    _Bool _shouldUseWideRows;
    unsigned long long _pruningCount;
    NSPointerArray *_rowInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *rowInfos; // @synthesize rowInfos=_rowInfos;
@property(nonatomic) _Bool lastSavedInBNC; // @synthesize lastSavedInBNC=_lastSavedInBNC;
- (void)assertListRows;
- (void)widenAllRowsForUpgrade;
- (void)didApplyConcurrentCellMap:(id)arg1;
- (void)swapRowAtTileRowIndex:(unsigned int)arg1 withRowAtTileRowIndex:(unsigned int)arg2;
- (void)spliceRows:(id)arg1 atTileRowIndex:(unsigned int)arg2;
- (void)spliceRowInfo:(id)arg1 atTileRowIndex:(unsigned int)arg2 overwrite:(_Bool)arg3;
- (id)yankRowsAtTileRowIndex:(unsigned int)arg1;
- (id)yankRowsAtTileRowIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)yankRowInfoAtTileRowIndex:(unsigned int)arg1;
- (id)shiftUpAndYankBy:(unsigned int)arg1;
- (void)shiftUpAtTileRowIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)clearRowsAtTileRowIndex:(unsigned int)arg1 numberOfRows:(unsigned int)arg2;
- (void)_removeRowsAtTileRowIndex:(unsigned int)arg1 numberOfRows:(unsigned int)arg2 shiftingContent:(_Bool)arg3;
- (void)insertRowsAtTileRowIndex:(unsigned int)arg1 numberOfRows:(unsigned int)arg2;
- (void)moveColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned int)arg2 toDestColumnIndex:(unsigned short)arg3;
- (id)removeColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned int)arg2;
- (int)insertColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned int)arg2;
- (long long)setCell:(id)arg1 atColumnIndex:(unsigned short)arg2 tileRowIndex:(unsigned int)arg3 formatKeys:(CDStruct_c8ca99d5 *)arg4;
- (struct TSTCellStorage *)preBNCCellStorageRefAtColumnIndex:(unsigned short)arg1 tileRowIndex:(unsigned int)arg2;
- (struct TSTCellStorage *)cellStorageRefAtColumnIndex:(unsigned short)arg1 tileRowIndex:(unsigned int)arg2;
- (id)rowInfoAtOrAfterTileRowIndex:(unsigned int)arg1 outTileRowIndex:(out unsigned int *)arg2;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsAndIndexesWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeRowInfo:(id)arg1 atTileRowIndex:(unsigned int)arg2;
- (id)findOrAddRowInfoAtTileRowIndex:(unsigned int)arg1;
- (void)pruneEmptyRows;
- (id)description;
@property(readonly, nonatomic) NSIndexSet *populatedRows;
- (void)setShouldUseWideRows:(_Bool)arg1;
@property(readonly, nonatomic) _Bool shouldUseWideRows;
@property(readonly, nonatomic) unsigned long long archivingCompatibilityVersion;
- (void)saveToArchiver:(id)arg1;
- (void)willModify;
- (void)loadFromUnarchiver:(id)arg1;
- (id)rowInfoForTileRowIndex:(unsigned int)arg1;
- (void)_setRowInfo:(id)arg1 atTileRowIndex:(unsigned int)arg2;
- (void)p_pruneRowCount;
- (id)packageLocator;
- (id)initWithContext:(id)arg1;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (id)initWithRows:(id)arg1 shouldUseWideRows:(_Bool)arg2 context:(id)arg3;
@property(readonly, nonatomic) unsigned short maxColumn;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned int numRows;
@property(readonly, nonatomic) unsigned int maxRow;

@end

