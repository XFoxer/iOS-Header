//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class NSArray, WFSlotTemplateSlot;
@protocol WFParameterState;

@protocol WFModuleSummarySupporting <NSObject>

@optional
- (_Bool)moduleSummaryShowsAddButtonForState:(id <WFParameterState>)arg1;
- (id <WFParameterState>)defaultStateForNewArrayElement;
- (NSArray *)moduleSummarySlotsForState:(id <WFParameterState>)arg1;
- (WFSlotTemplateSlot *)moduleSummarySlotForState:(id <WFParameterState>)arg1;
@end

