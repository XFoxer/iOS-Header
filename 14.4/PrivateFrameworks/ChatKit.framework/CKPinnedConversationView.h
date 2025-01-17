//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CNAvatarViewDelegate-Protocol.h>

@class CAFilter, CKAvatarView, CKConversation, CKPinnedConversationActivityView, NSArray, NSMutableArray, NSString, UIImage, UIImageView, UILabel, VNFaceLandmarkRegion2D;
@protocol CKPinnedConversationViewDelegate;

@interface CKPinnedConversationView : UIView <CNAvatarViewDelegate>
{
    _Bool _dimmed;
    _Bool _showsLiveActivity;
    _Bool _preferShortConversationName;
    _Bool _needsUnreadIndicatorLeadingEdgePadding;
    _Bool _isSelectedWithDarkAppearance;
    CKConversation *_conversation;
    NSArray *_recentMessagesInPinnedConversations;
    CKAvatarView *_avatarView;
    UIImage *_avatarSnapshot;
    UILabel *_titleLabel;
    UIImageView *_unreadIndicator;
    UIImageView *_radiantShadowImageView;
    long long _layoutStyle;
    UIView *_activityBoundingParentView;
    double _activityItemTopInset;
    id <CKPinnedConversationViewDelegate> _delegate;
    CAFilter *_dimmingFilter;
    CKPinnedConversationActivityView *_activityView;
    UIImageView *_avatarSnapshotImageView;
    VNFaceLandmarkRegion2D *_avatarMouthRegion;
    NSMutableArray *_activeActivitySuppressionReasons;
}

+ (_Bool)_mouthRegionDetectionEnabled;
+ (void)_determineMouthRegionForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_updateCachedMouthRegionIfNecessaryForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_cachedMouthRegionForContact:(id)arg1;
+ (id)_mouthRegionForContactImageCacheKeyForContact:(id)arg1;
+ (id)_mouthRegionDetectionDispatchQueue;
+ (id)_mouthRegionForContactImageCache;
+ (id)_requiredContactKeys;
+ (struct UIEdgeInsets)titleLabelVerticalPadding;
+ (struct UIEdgeInsets)avatarViewPadding;
+ (double)_preferredAvatarViewDiameterForLayoutStyle:(long long)arg1;
+ (double)_maximumAvatarViewWidthFittingSize:(struct CGSize)arg1;
+ (struct CGSize)avatarViewSizeFittingSize:(struct CGSize)arg1 layoutStyle:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *activeActivitySuppressionReasons; // @synthesize activeActivitySuppressionReasons=_activeActivitySuppressionReasons;
@property(retain, nonatomic) VNFaceLandmarkRegion2D *avatarMouthRegion; // @synthesize avatarMouthRegion=_avatarMouthRegion;
@property(retain, nonatomic) UIImageView *avatarSnapshotImageView; // @synthesize avatarSnapshotImageView=_avatarSnapshotImageView;
@property(retain, nonatomic) CKPinnedConversationActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) CAFilter *dimmingFilter; // @synthesize dimmingFilter=_dimmingFilter;
@property(nonatomic) __weak id <CKPinnedConversationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double activityItemTopInset; // @synthesize activityItemTopInset=_activityItemTopInset;
@property(nonatomic) __weak UIView *activityBoundingParentView; // @synthesize activityBoundingParentView=_activityBoundingParentView;
@property(nonatomic) _Bool isSelectedWithDarkAppearance; // @synthesize isSelectedWithDarkAppearance=_isSelectedWithDarkAppearance;
@property(nonatomic) _Bool needsUnreadIndicatorLeadingEdgePadding; // @synthesize needsUnreadIndicatorLeadingEdgePadding=_needsUnreadIndicatorLeadingEdgePadding;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UIImageView *radiantShadowImageView; // @synthesize radiantShadowImageView=_radiantShadowImageView;
@property(retain, nonatomic) UIImageView *unreadIndicator; // @synthesize unreadIndicator=_unreadIndicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *avatarSnapshot; // @synthesize avatarSnapshot=_avatarSnapshot;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool preferShortConversationName; // @synthesize preferShortConversationName=_preferShortConversationName;
@property(nonatomic) _Bool showsLiveActivity; // @synthesize showsLiveActivity=_showsLiveActivity;
@property(copy, nonatomic) NSArray *recentMessagesInPinnedConversations; // @synthesize recentMessagesInPinnedConversations=_recentMessagesInPinnedConversations;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (struct CGPoint)_centerPointOfFaceLandmarkRegion:(id)arg1 inImageOfSize:(struct CGSize)arg2;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)_updateRadiantShadowImageView;
- (void)_updateAvatarView;
- (void)_updateAvatarMouthRegion;
- (void)configureAsPrototypeCell;
- (_Bool)_activityIsSuppressedForLayoutStyle:(long long)arg1;
- (id)_unreadIndicatorColor;
- (id)_unreadIndicatorImage;
- (void)_updateUnreadIndicator;
- (void)_updateTitleLabelColor;
- (void)_updateTitleLabelFont;
- (void)_updateTitleLabel;
- (void)_updateTitleLabelWithText:(id)arg1;
- (void)reapplyPreviouslyDisplayedActivitySnapshot:(id)arg1;
- (void)updateActivityViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct NSDirectionalEdgeInsets)unreadIndicatorMinimumPadding;
- (struct NSDirectionalEdgeInsets)unreadIndicatorPreferredPadding;
- (struct CGSize)unreadIndicatorSize;
- (double)_unreadIndicatorLeadingEdgePadding;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)prepareForReuse;
- (void)didEndDisplaying;
- (struct CGSize)titleLabelSizeFittingSize:(struct CGSize)arg1;
- (struct CGRect)avatarViewFrameForSize:(struct CGSize)arg1 layoutStyle:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateRadiantShadowAffineTranform;
- (void)layoutSubviews;
- (void)removeDimmingFilter;
- (void)dimAvatarView;
@property(readonly, nonatomic, getter=isSuppressingActivity) _Bool suppressingActivity;
- (void)endSuppressingActivityWithReason:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginSuppressingActivityWithReason:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) long long activityItemOriginationDirection;
@property(nonatomic, getter=isUnreadIndicatorHidden) _Bool unreadIndicatorHidden;
- (void)setUnreadIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

