//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell
{
    UIView *_pageContentView;
    struct UIEdgeInsets _additionnalContentInsets;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets additionnalContentInsets; // @synthesize additionnalContentInsets=_additionnalContentInsets;
@property(retain, nonatomic) UIView *pageContentView; // @synthesize pageContentView=_pageContentView;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

