//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FRLikeDislikeControl, UIImageSymbolConfiguration;

@interface FRHeaderAccessoryMuteFavoriteView : UIView
{
    long long _muteFavoriteOption;
    FRLikeDislikeControl *_likeDislikeControl;
    FRLikeDislikeControl *_favoriteControl;
    UIImageSymbolConfiguration *_symbolConfiguration;
}

+ (struct CGSize)_accessoryViewSizeWithButtonOptions:(long long)arg1 useRegularSize:(_Bool)arg2;
+ (CDStruct_edf165d0)layoutWithButtonOptions:(long long)arg1 regularLayout:(_Bool)arg2 inToolbar:(_Bool)arg3 additionalPadding:(struct UIEdgeInsets)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageSymbolConfiguration *symbolConfiguration; // @synthesize symbolConfiguration=_symbolConfiguration;
@property(readonly, nonatomic) FRLikeDislikeControl *favoriteControl; // @synthesize favoriteControl=_favoriteControl;
@property(readonly, nonatomic) FRLikeDislikeControl *likeDislikeControl; // @synthesize likeDislikeControl=_likeDislikeControl;
@property(nonatomic) long long muteFavoriteOption; // @synthesize muteFavoriteOption=_muteFavoriteOption;
- (_Bool)_showingFavoriteControl;
- (_Bool)_showingMuteControl;
- (void)_configureViewForCurrentAppearanceState;
- (void)configureLikeDislikeButtonFrame:(struct CGRect)arg1 favoriteButtonFrame:(struct CGRect)arg2 imageHeight:(double)arg3;
- (void)setTintColor:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

