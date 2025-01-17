//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTLayoutDynamicResizeInfoProtocol-Protocol.h>

@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>
{
    _Bool mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned int mStartRowIndex;
    unsigned int mNumberOfRows;
    unsigned int mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned short mStartColumnIndex;
    unsigned int mNumberOfColumns;
    unsigned int mNumberOfResizableColumns;
    double *mCapturedColumnWidths;
    double *mCurrentColumnWidths;
    double *mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

- (double)totalMinimumColumnWidths;
- (double)totalMinimumRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalCapturedColumnWidths;
- (double)totalCapturedRowHeights;
- (id)columnWidths;
- (id)rowHeights;
- (void)enumerateRowHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnWidthsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)capturedTableSize;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)getMinimumColumnWidth:(unsigned short)arg1;
- (double)getMinimumRowHeight:(unsigned int)arg1;
- (double)getColumnWidthResize:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned int)arg1;
- (double)getColumnWidth:(unsigned short)arg1;
- (double)getRowHeight:(unsigned int)arg1;
- (double)getColumnInitialWidth:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned int)arg1;
- (_Bool)hasWidthForColumn:(unsigned short)arg1;
- (_Bool)hasHeightForRow:(unsigned int)arg1;
- (void)invalidate;
- (_Bool)valid;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (void)dealloc;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

