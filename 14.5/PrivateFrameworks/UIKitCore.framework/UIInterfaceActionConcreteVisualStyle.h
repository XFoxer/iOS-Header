//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImplInternal-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>
{
}

- (id)newRepresentationViewForAction:(id)arg1;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingImageViewStyling;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingLabelStyling;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (id)actionClassificationLabelColorForViewState:(id)arg1;
- (id)actionClassificationLabelFontForViewState:(id)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (double)actionTitleLabelMinimumScaleFactor;
- (_Bool)selectByIndirectPointerTouchRequired;
- (_Bool)selectionFeedbackEnabled;
- (_Bool)selectByPressGestureRequired;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (double)actionSectionSpacing;
- (double)verticalImageContentSpacing;
- (double)horizontalImageContentSpacing;
- (struct CGSize)minimumActionContentSize;
- (struct UIEdgeInsets)contentMargin;
- (double)contentCornerRadius;
- (struct CGSize)maximumActionGroupContentSize;
- (id)defaultScreen;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

