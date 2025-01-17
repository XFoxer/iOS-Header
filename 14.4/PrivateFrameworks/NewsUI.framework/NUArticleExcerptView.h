//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI/UIScrollViewDelegate-Protocol.h>

@class NFMultiDelegate, NSString, NUArticleExcerptReadMoreButton, NUArticleExcerptTraits, UIImageView, UILabel, UIScrollView, WKWebView;
@protocol UIScrollViewDelegate;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>
{
    NUArticleExcerptTraits *_traits;
    UILabel *_headlineTitleLabel;
    UILabel *_headlineDateLabel;
    WKWebView *_excerptWebView;
    NUArticleExcerptReadMoreButton *_readMoreButton;
    id <UIScrollViewDelegate> _delegate;
    UIScrollView *_contentScrollView;
    UIImageView *_headlineImageView;
    UIView *_hairlineSeparatorView;
    UIView *_contentView;
    NFMultiDelegate *_multiDelegate;
}

+ (id)webViewConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) NFMultiDelegate *multiDelegate; // @synthesize multiDelegate=_multiDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *hairlineSeparatorView; // @synthesize hairlineSeparatorView=_hairlineSeparatorView;
@property(readonly, nonatomic) UIImageView *headlineImageView; // @synthesize headlineImageView=_headlineImageView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(readonly, nonatomic) WKWebView *excerptWebView; // @synthesize excerptWebView=_excerptWebView;
@property(readonly, nonatomic) UILabel *headlineDateLabel; // @synthesize headlineDateLabel=_headlineDateLabel;
@property(readonly, nonatomic) UILabel *headlineTitleLabel; // @synthesize headlineTitleLabel=_headlineTitleLabel;
@property(copy, nonatomic) NUArticleExcerptTraits *traits; // @synthesize traits=_traits;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateImageAspectRatio;
- (void)layoutSubviews;
- (void)updateWithHeadlineImage:(id)arg1;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

