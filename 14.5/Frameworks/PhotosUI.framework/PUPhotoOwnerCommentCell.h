//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoOwnerCommentCell : UITableViewCell
{
    _Bool _usesCompactSeparators;
    NSAttributedString *_ownerString;
    UILabel *_ownerContentLabel;
    UIView *_styledSeparatorView;
}

+ (double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
+ (id)_ownerStringForAsset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(readonly, retain, nonatomic) UILabel *ownerContentLabel; // @synthesize ownerContentLabel=_ownerContentLabel;
@property(copy, nonatomic) NSAttributedString *ownerString; // @synthesize ownerString=_ownerString;
@property(nonatomic) _Bool usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;
- (void)layoutSubviews;
- (void)updateContentFromAsset:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

