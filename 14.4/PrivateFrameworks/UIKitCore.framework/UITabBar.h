//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIBarPositioning-Protocol.h>
#import <UIKitCore/_UIShadowedView-Protocol.h>
#import <UIKitCore/_UITabBarDelegateInternal-Protocol.h>

@class NSArray, NSString, UIColor, UIImage, UITabBarAppearance, UITabBarCustomizeView, UITabBarItem, _UITabBarAccessoryView, _UITabBarAppearanceStorage, _UITabBarVisualProvider;
@protocol UITabBarDelegate, _UITabBarDelegateInternal;

@interface UITabBar : UIView <_UIShadowedView, UIBarPositioning, _UITabBarDelegateInternal>
{
    UITabBarCustomizeView *_customizeView;
    id <_UITabBarDelegateInternal> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    long long _barOrientation;
    struct {
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int backgroundNeedsUpdate:1;
        unsigned int hiddenAwaitingFocus:1;
        unsigned int focusedItemHighlightShouldBeVisible:1;
        unsigned int hasVibrantLabels:1;
        unsigned int disableBlurTinting:1;
        unsigned int pendingFocusAction:1;
        unsigned int springLoaded:1;
        unsigned int delegateRespondsToInterfaceOrientationWindowSelector:1;
    } _tabBarFlags;
    _UITabBarAppearanceStorage *_appearanceStorage;
    _UITabBarVisualProvider *_visualProvider;
    _UITabBarAccessoryView *_leadingBarAccessoryView;
    _UITabBarAccessoryView *_trailingBarAccessoryView;
    _Bool _hidesShadow;
    _Bool _showsHighlightedState;
    _Bool _scrollsItems;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UITabBarAppearance *_standardAppearance;
    unsigned long long _preferredFocusHeading;
    UIView *__expectedSuperviewFollowingAnimation;
    long long _displayStyle;
    NSArray *_backgroundEffects;
}

+ (id)_visualProviderForTabBar:(id)arg1;
+ (void)_initializeForIdiom:(long long)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(nonatomic, getter=_displayStyle, setter=_setDisplayStyle:) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) UIView *_expectedSuperviewFollowingAnimation; // @synthesize _expectedSuperviewFollowingAnimation=__expectedSuperviewFollowingAnimation;
@property(nonatomic, getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:) unsigned long long preferredFocusHeading; // @synthesize preferredFocusHeading=_preferredFocusHeading;
@property(nonatomic) __weak UITabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) __weak id <UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setScrollsItems:) _Bool _scrollsItems; // @synthesize _scrollsItems;
@property(nonatomic, setter=_setTabBarSizing:) long long _tabBarSizing; // @synthesize _tabBarSizing;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
@property(nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow; // @synthesize _hidesShadow;
@property(nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemDimension;
@property(nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(readonly, nonatomic) UIView *trailingAccessoryView;
@property(readonly, nonatomic) UIView *leadingAccessoryView;
@property(readonly, nonatomic) _UITabBarAccessoryView *_trailingBarAccessoryView;
@property(readonly, nonatomic) _UITabBarAccessoryView *_leadingBarAccessoryView;
@property(readonly, nonatomic) long long barPosition;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_updateTabBarItemView:(id)arg1;
- (void)_positionAllItems;
- (void)_ensureUnfocusedItemsAreNotSelected;
- (double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4;
- (double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(_Bool)arg3;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_dismissCustomizeSheet:(_Bool)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissCustomizeSheet:(_Bool)arg1;
- (void)_tabBarFinishedAnimating;
@property(nonatomic, getter=_deferViewUpdateToFocusUpdate, setter=_setDeferViewUpdateToFocusUpdate:) _Bool deferViewUpdateToFocusUpdate;
@property(readonly, nonatomic, getter=_focusedIndex) long long focusedIndex;
@property(readonly, nonatomic, getter=_focusedTabBarItem) UITabBarItem *focusedTabBarItem;
@property(nonatomic, getter=_pendingFocusAction, setter=_setPendingFocusAction:) _Bool pendingFocusAction;
@property(nonatomic, getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:) _Bool focusedItemHighlightShouldBeVisible;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic, getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:) _Bool hiddenAwaitingFocus;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)_isEligibleForFocusInteraction;
@property(nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (id)_shadowView;
@property(retain, nonatomic) UIColor *selectedImageTintColor;
@property(copy, nonatomic) UIColor *unselectedItemTintColor;
- (id)_defaultUnselectedTintColorForDefaultTV;
- (id)_effectiveUnselectedLabelTintColor;
- (id)_effectiveUnselectedTintColor;
@property(retain, nonatomic) UIColor *barTintColor;
- (id)_normalInheritedTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_effectiveBarTintColorDidChange;
- (id)_effectiveBarTintColor;
@property(retain, nonatomic) UIImage *selectionIndicatorImage;
@property(retain, nonatomic) UIImage *shadowImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)_useModernAppearance;
@property(copy, nonatomic) UITabBarAppearance *standardAppearance; // @synthesize standardAppearance=_standardAppearance;
- (void)_installDefaultAppearance;
- (_Bool)isSpringLoaded;
- (void)setSpringLoaded:(_Bool)arg1;
- (id)preferredFocusedView;
- (void)_makeCurrentButtonFirstResponder;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
@property(readonly, nonatomic, getter=isCustomizing) _Bool customizing;
- (_Bool)endCustomizingAnimated:(_Bool)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
@property(readonly, nonatomic) UIView *_externalViewForSafeAreaInsets;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_isTranslucent;
@property(nonatomic, setter=_setBarOrientation:) long long _barOrientation;
- (long long)_effectiveBarOrientation;
@property(readonly, nonatomic) long long _expectedInterfaceOrientation;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (double)_heightForCustomizingItems;
- (id)_tabBarItemForButtonAtPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic, getter=isLocked) _Bool locked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_doCommonTabBarInit;
- (void)_doCommonTabBarPreInit;
- (_Bool)_subclassImplementsDrawRect;
@property(nonatomic, setter=_setInterTabButtonSpacing:) double _interTabButtonSpacing;
@property(nonatomic, setter=_setTabButtonWidth:) double _tabButtonWidth;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName;
@property(copy, nonatomic, setter=_setBackdropGroupName:) NSString *_backdropGroupName;
- (id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1;
- (id)_appearanceStorage;
@property(nonatomic) long long barStyle;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(nonatomic, setter=_setBackgroundNeedsUpdate:) _Bool _backgroundNeedsUpdate;
- (void)_setShadowAlpha:(double)arg1;
- (double)_shadowAlpha;
@property(nonatomic, setter=_setMinimumWidthForHorizontalLayout:) double _minimumWidthForHorizontalLayout;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView;
@property(nonatomic, setter=_setNextSelectionSlideDuration:) double _nextSelectionSlideDuration;
@property(nonatomic, setter=_setDisableBlurTinting:) _Bool _disableBlurTinting;
@property(nonatomic, setter=_setBlurEnabled:) _Bool _blurEnabled;
@property(nonatomic, setter=_setVibrantLabels:) _Bool _vibrantLabels;
@property(readonly, nonatomic, getter=_useVibrantItems) _Bool useVibrantItems;
- (void)_setLabelShadowOffset:(struct CGSize)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setLabelFont:(id)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property(readonly, copy) NSString *description;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

