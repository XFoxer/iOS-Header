//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableArray, NSMutableDictionary, WDText;

__attribute__((visibility("hidden")))
@interface WMState : CMState
{
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned long long mBlockIndex;
    unsigned long long mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    _Bool mIsFrame;
    _Bool mIsFrameStart;
    _Bool mIsFrameEnd;
    _Bool mIsHeaderOrFooter;
    float mTotalPageHeight;
    NSMutableArray *_paragraphStack;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *paragraphStack; // @synthesize paragraphStack=_paragraphStack;
- (_Bool)containsParagraph:(id)arg1;
- (void)popParagraph;
- (void)pushParagraph:(id)arg1;
- (_Bool)isHeaderOrFooter;
- (void)setIsHeaderOrFooter:(_Bool)arg1;
- (_Bool)isFrameEnd;
- (void)setIsFrameEnd:(_Bool)arg1;
- (_Bool)isFrameStart;
- (void)setIsFrameStart:(_Bool)arg1;
- (_Bool)isFrame;
- (void)setIsFrame:(_Bool)arg1;
- (id)lastFooter;
- (void)setLastFooter:(id)arg1;
- (id)lastHeader;
- (void)setLastHeader:(id)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg1;
- (float)pageHeight;
- (void)setPageHeight:(float)arg1;
- (unsigned long long)blockIndex;
- (void)setBlockIndex:(unsigned long long)arg1;
- (unsigned long long)runIndex;
- (void)setRunIndex:(unsigned long long)arg1;
- (float)pageOffset;
- (unsigned int)currentPage;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setListState:(id)arg1 forListDefinitionId:(int)arg2;
- (id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2;
- (id)listStateForListDefinitionId:(int)arg1;
- (void)clearCurrentListState;
- (_Bool)isCurrentListDefinitionId:(int)arg1;
- (_Bool)isCurrentListStateOverridden;
- (void)setCurrentListState:(id)arg1;
- (id)outlineState;
- (id)currentListState;
- (void)dealloc;
- (id)init;

@end

