//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class GKButton, GKLabel, NSLayoutConstraint, NSString, UIView;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView
{
    _Bool _manualItemCount;
    _Bool _allSectionItemsVisible;
    GKLabel *_leftLabel;
    SEL _showAllAction;
    id _rightTarget;
    SEL _rightAction;
    CDUnknownFunctionPointerType _itemCountFormatter;
    long long _maxRange;
    UIView *_backgroundView;
    GKButton *_rightButton;
    unsigned long long _sectionIndex;
    long long _itemCount;
    long long _maxItemCount;
    NSLayoutConstraint *_backgroundViewHeightConstraint;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
@property(retain, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint; // @synthesize backgroundViewHeightConstraint=_backgroundViewHeightConstraint;
@property(nonatomic) _Bool allSectionItemsVisible; // @synthesize allSectionItemsVisible=_allSectionItemsVisible;
@property(nonatomic) long long maxItemCount; // @synthesize maxItemCount=_maxItemCount;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) GKButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long maxRange; // @synthesize maxRange=_maxRange;
@property(nonatomic) _Bool manualItemCount; // @synthesize manualItemCount=_manualItemCount;
@property(nonatomic) CDUnknownFunctionPointerType itemCountFormatter; // @synthesize itemCountFormatter=_itemCountFormatter;
@property(nonatomic) SEL rightAction; // @synthesize rightAction=_rightAction;
@property(nonatomic) id rightTarget; // @synthesize rightTarget=_rightTarget;
@property(nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;
@property(retain, nonatomic) GKLabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void)rightButtonTouched:(id)arg1;
- (void)updateLabel;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (struct CGRect)rightButtonFrame;
@property(retain, nonatomic) NSString *rightText;
@property(retain, nonatomic) NSString *leftText;
- (void)establishConstraints;
- (void)updateGutterConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

