//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SFAttributionFooterCardSection, TLKStackView, TLKTextButton;

@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView
{
    TLKStackView *_stackView;
    TLKTextButton *_leadingTextButton;
    TLKTextButton *_trailingTextButton;
    SFAttributionFooterCardSection *_cardSection;
}

+ (void)removeIconsFromRichText:(id)arg1;
+ (_Bool)prefersNoSeparatorAboveCardSection:(id)arg1;
+ (_Bool)supportsCustomUserReportRequestAfforance;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SFAttributionFooterCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) TLKTextButton *trailingTextButton; // @synthesize trailingTextButton=_trailingTextButton;
@property(retain, nonatomic) TLKTextButton *leadingTextButton; // @synthesize leadingTextButton=_leadingTextButton;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
- (void)didPressTrailingTextButton;
- (void)didPressLeadingTextButton;
- (void)updateWithRowModel:(id)arg1;
- (void)updateAttributionThatIsLeading:(_Bool)arg1 withSection:(id)arg2 isRTL:(_Bool)arg3;
- (void)setUserInteractionEnabled:(_Bool)arg1 forButton:(id)arg2;
- (id)setupContentView;
- (id)setupTextButtonThatIsLeadingAttribution:(_Bool)arg1;

@end

