//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FRCardConfigurationCache;

@interface FRCardConfiguration : NSObject
{
    double _cardCornerRadius;
    double _materialBlurRadius;
    double _materialColorAlpha;
    FRCardConfigurationCache *_cache;
}

+ (id)_gradientCGColors;
+ (struct CGSize)textMargin;
+ (double)bannerHeightForWidth:(double)arg1;
+ (id)cardConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) FRCardConfigurationCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) double materialColorAlpha; // @synthesize materialColorAlpha=_materialColorAlpha;
@property(readonly, nonatomic) double materialBlurRadius; // @synthesize materialBlurRadius=_materialBlurRadius;
@property(readonly, nonatomic) double cardCornerRadius; // @synthesize cardCornerRadius=_cardCornerRadius;
- (void)prewarmConfigurationForCardSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (id)placeholderChannelImageForCardOfSize:(struct CGSize)arg1;
- (id)placeholderTopicImageForCardOfSize:(struct CGSize)arg1;
- (id)_placeholderOfSize:(struct CGSize)arg1 withChin:(_Bool)arg2;
- (id)gradientLayerWithChin:(_Bool)arg1;
- (struct CGSize)topicTitleTextSize:(id)arg1 cardSize:(struct CGSize)arg2;
- (struct CGSize)topicTextSize:(id)arg1 cardSize:(struct CGSize)arg2;
- (struct CGRect)topicTextRect:(id)arg1 cardSize:(struct CGSize)arg2 textPadPath:(id *)arg3;
- (struct CGRect)topicFrameForSize:(struct CGSize)arg1;
- (id)topicTextAttributesForCardSize:(struct CGSize)arg1 textColor:(id)arg2 sizeCategory:(id)arg3;
- (id)topicTitleAttributesForCardSize:(struct CGSize)arg1 textColor:(id)arg2 sizeCategory:(id)arg3;
- (double)spaceBetweenHorizontalDividerAndTopicNameForCardSize:(struct CGSize)arg1;
- (double)spaceBetweenTopicTitleAndHorizontalDividerForCardSize:(struct CGSize)arg1;
- (double)horizontalDividerWidthForCardSize:(struct CGSize)arg1;
- (double)topicTitleTopMarginForCardSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)insetsForCollectionViewBounds:(struct CGRect)arg1;
- (struct CGSize)itemSizeForCollectionViewBounds:(struct CGRect)arg1 isCompact:(_Bool)arg2 orientation:(long long)arg3;
- (unsigned long long)numberOfColumnsForCollectionViewBounds:(struct CGRect)arg1 isCompact:(_Bool)arg2 orientation:(long long)arg3;
- (struct UIEdgeInsets)gridInsetsForWidth:(double)arg1;
- (double)gridSpacingForWidth:(double)arg1;
- (struct UIEdgeInsets)logoInsetsForBannerSize:(struct CGSize)arg1 logoAspectRatio:(double)arg2;
- (struct CGRect)bannerFrameForSize:(struct CGSize)arg1;
- (id)attributedStringForTag:(id)arg1 boundsSize:(struct CGSize)arg2 sizeCategory:(id)arg3;
- (id)textColorForTag:(id)arg1;
- (double)_kerningFeedsWhenInCardsOfSize:(struct CGSize)arg1 isChannel:(_Bool)arg2 sizeCategory:(id)arg3;
- (double)kerningForTopicFeedsWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (double)kerningForChannelFeedsWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (id)fontForChannelFeedsWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (id)fontForTopicFeedsWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (double)_fontSizeForTopicFeedsWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (double)_fontSizeForTopicTitleWhenInCardsOfSize:(struct CGSize)arg1 sizeCategory:(id)arg2;
- (double)lineHeightForSize:(struct CGSize)arg1;
- (double)insetForFeed:(id)arg1 sizeCategory:(id)arg2;
- (id)init;

@end

