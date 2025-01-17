//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell
{
    _Bool _showingPlaceholder;
    _Bool _snapshotImageHasBorder;
    UIImageView *_snapshotImageView;
    UILabel *_credentialDetailLabel;
}

+ (struct CGSize)defaultImageViewSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool snapshotImageHasBorder; // @synthesize snapshotImageHasBorder=_snapshotImageHasBorder;
@property(nonatomic) _Bool showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly, nonatomic) UILabel *credentialDetailLabel; // @synthesize credentialDetailLabel=_credentialDetailLabel;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
- (void)prepareForReuse;
- (id)detailTextLabelColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

