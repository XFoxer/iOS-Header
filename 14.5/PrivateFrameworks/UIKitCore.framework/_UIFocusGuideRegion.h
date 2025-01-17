//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion
{
    _Bool __isUnoccludable;
    _Bool __ignoresSpeedBumpEdges;
    id <_UIFocusGuideRegionDelegate> _delegate;
    double __focusPriority;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setIgnoresSpeedBumpEdges:) _Bool _ignoresSpeedBumpEdges; // @synthesize _ignoresSpeedBumpEdges=__ignoresSpeedBumpEdges;
@property(nonatomic, setter=_setFocusPriority:) double _focusPriority; // @synthesize _focusPriority=__focusPriority;
@property(nonatomic, setter=_setIsUnoccludable:) _Bool _isUnoccludable; // @synthesize _isUnoccludable=__isUnoccludable;
@property(nonatomic) __weak id <_UIFocusGuideRegionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (long long)_visualRepresentationPatternType;
- (id)_visualRepresentationColor;
- (id)_debugAssociatedObject;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (long long)_preferredDistanceComparisonType;
- (unsigned long long)_focusableBoundaries;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldUseNextFocusedItemForLinearSorting;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_canOccludeRegionsBelow;
- (_Bool)_isEnabledForFocusedRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

