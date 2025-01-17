//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNUINavigationListViewCell.h>

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell
{
    long long _contentAlignment;
}

+ (id)reuseIdentifier;
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
- (void)applyStyle;
- (void)updateConstraints;
- (void)loadContentViewConstraints;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)minimumContentHeight;

@end

