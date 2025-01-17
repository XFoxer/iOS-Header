//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class CNAvatarViewController, NSString, PKActivityEventPeerPaymentTransaction, PKSuperscriptedCurrencyAmountLabel, UIImageView, UILabel;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell
{
    UILabel *_titleView;
    UILabel *_subtitleView;
    UILabel *_timeView;
    PKSuperscriptedCurrencyAmountLabel *_amountLabel;
    UIImageView *_unreadIndicatorView;
    PKActivityEventPeerPaymentTransaction *_event;
    CNAvatarViewController *_avatarViewController;
    NSString *_contactName;
}

+ (id)unreadIndicatorImage;
+ (double)separatorLeadingInset;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) PKActivityEventPeerPaymentTransaction *event; // @synthesize event=_event;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

