//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSTabOrderPreferenceProviding-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol WBSOrderedTab, WBSTabOrderPreferenceProviding, WBSTabOrderProvider;

@interface WBSTabOrderManager : NSObject <WBSTabOrderPreferenceProviding>
{
    NSMutableDictionary *_simplifiedIdentifierMap;
    long long _nextSimplifiedIdentifier;
    id <WBSTabOrderProvider> _tabOrderProvider;
    id <WBSTabOrderPreferenceProviding> _preferenceProvider;
}

- (void).cxx_destruct;
@property __weak id <WBSTabOrderPreferenceProviding> preferenceProvider; // @synthesize preferenceProvider=_preferenceProvider;
@property(nonatomic) __weak id <WBSTabOrderProvider> tabOrderProvider; // @synthesize tabOrderProvider=_tabOrderProvider;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)arg1 inAscendingOrder:(_Bool)arg2;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)arg1 isBlankTab:(_Bool)arg2;
- (id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)arg1 relation:(unsigned long long)arg2;
@property(readonly, nonatomic) double minimumDelayForRelatingNewBlankTab;
@property(readonly, nonatomic) _Bool suppressRelatingNewBlankTabs;
@property(readonly, nonatomic) _Bool newBlankTabPositionAppliesToAllBlankTabs;
@property(readonly, nonatomic) _Bool newTabPositionAppliesToSpawnedTabs;
@property(readonly, nonatomic) unsigned long long newTabPosition;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1;
- (_Bool)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2;
- (_Bool)tab:(id)arg1 isInSameSetAsTab:(id)arg2;
@property(readonly, nonatomic) id <WBSOrderedTab> tabToSelectBeforeClosingSelectedTab;
- (_Bool)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(_Bool)arg1;
- (id)tabInsertionHintForSpawnedTab;
- (id)tabToInsertSpawnedTabAfter;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)arg1;
- (id)tabInsertionHintForNewBlankTab;
- (id)tabToInsertNewBlankTabAfter;
- (unsigned long long)_indexOfLastRelatedTab;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;
- (id)tabInsertionHintForDuplicateOfTab:(id)arg1;
- (id)_tabInsertionHintForNewTabAfterTab:(id)arg1 relation:(unsigned long long)arg2;
- (id)_tabInsertionHintForPosition:(unsigned long long)arg1 isBlankTab:(_Bool)arg2;
- (id)tabInsertionHintForPosition:(unsigned long long)arg1;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

