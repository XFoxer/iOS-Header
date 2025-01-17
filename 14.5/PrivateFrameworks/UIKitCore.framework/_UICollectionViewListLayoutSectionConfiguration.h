//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString, UICollectionView, UIColor, _UIListSeparatorConfiguration;
@protocol NSCollectionLayoutEnvironment_Private, UITableConstants;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>
{
    _Bool _stylesFirstItemAsHeader;
    _Bool __apiVersion;
    _UIListSeparatorConfiguration *_separatorConfiguration;
    CDUnknownBlockType _itemSeparatorHandler;
    long long _appearanceStyle;
    double _rowHeight;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedRowHeight;
    double _estimatedSectionHeaderHeight;
    double _estimatedSectionFooterHeight;
    long long _separatorStyle;
    CDUnknownBlockType _separatorInsetProvider;
    CDUnknownBlockType _leadingSwipeActionsConfigurationProvider;
    CDUnknownBlockType _trailingSwipeActionsConfigurationProvider;
    CDUnknownBlockType _willBeginSwipingHandler;
    CDUnknownBlockType _didEndSwipingHandler;
    UICollectionView *_collectionView;
    id <NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
    NSArray *_itemHeights;
    NSString *__headerElementKind;
    NSString *__footerElementKind;
    UIColor *__backgroundColor;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *_backgroundColor; // @synthesize _backgroundColor=__backgroundColor;
@property(copy, nonatomic) NSString *_footerElementKind; // @synthesize _footerElementKind=__footerElementKind;
@property(copy, nonatomic) NSString *_headerElementKind; // @synthesize _headerElementKind=__headerElementKind;
@property(copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights; // @synthesize itemHeights=_itemHeights;
@property(nonatomic, getter=_isAPIVersion) _Bool _apiVersion; // @synthesize _apiVersion=__apiVersion;
@property(readonly, nonatomic, getter=_layoutEnvironment) id <NSCollectionLayoutEnvironment_Private> layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
@property(readonly, nonatomic, getter=_collectionView) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType didEndSwipingHandler; // @synthesize didEndSwipingHandler=_didEndSwipingHandler;
@property(copy, nonatomic) CDUnknownBlockType willBeginSwipingHandler; // @synthesize willBeginSwipingHandler=_willBeginSwipingHandler;
@property(copy, nonatomic) CDUnknownBlockType trailingSwipeActionsConfigurationProvider; // @synthesize trailingSwipeActionsConfigurationProvider=_trailingSwipeActionsConfigurationProvider;
@property(copy, nonatomic) CDUnknownBlockType leadingSwipeActionsConfigurationProvider; // @synthesize leadingSwipeActionsConfigurationProvider=_leadingSwipeActionsConfigurationProvider;
@property(copy, nonatomic) CDUnknownBlockType separatorInsetProvider; // @synthesize separatorInsetProvider=_separatorInsetProvider;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) double estimatedSectionFooterHeight; // @synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight;
@property(nonatomic) double estimatedSectionHeaderHeight; // @synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight;
@property(nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property(nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool stylesFirstItemAsHeader; // @synthesize stylesFirstItemAsHeader=_stylesFirstItemAsHeader;
@property(nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(copy, nonatomic, getter=_itemSeparatorHandler, setter=_setItemSeparatorHandler:) CDUnknownBlockType _itemSeparatorHandler; // @synthesize _itemSeparatorHandler;
@property(readonly, nonatomic, getter=_constants) id <UITableConstants> constants;
- (id)_traitCollection;
- (_Bool)_hasFooter;
- (_Bool)_hasHeaderOrFirstItemStyledAsHeader;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (double)_defaultRowHeight;
- (double)_effectiveEstimatedSectionFooterHeight;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (double)_effectiveEstimatedRowHeight;
- (double)_separatorHeight;
- (_Bool)_shouldDrawThickSeparators;
- (_Bool)_shouldPinSupplementaries;
- (_Bool)_shouldSupplementariesFollowSectionInsets;
- (struct NSDirectionalEdgeInsets)_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets)arg1;
- (long long)_defaultContentInsetsReference;
- (_Bool)_usesSectionBackgroundDecoration;
- (void)_addSupplementaryItemsToLayout:(id)arg1;
- (id)_generateLayoutGroup:(id)arg1;
- (id)_createSwipeActionsContainer;
@property(readonly, nonatomic, getter=_wantsSwipeActions) _Bool wantsSwipeActions;
- (id)_createSeparatorForBottom:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_defaultSeparatorStyleForAppearanceStyle:(long long)arg1;
@property(readonly, nonatomic, getter=_separatorConfigurationNoCopy) _UIListSeparatorConfiguration *_separatorConfigurationNoCopy;
@property(copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration; // @synthesize _separatorConfiguration;
@property(nonatomic) struct NSDirectionalEdgeInsets separatorInset;
- (id)initWithAppearanceStyle:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)initWithCollectionView:(id)arg1;
- (id)init;

@end

