//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface GKOnboardingWhatsNewListCell : UIView
{
    unsigned long long _currentCellType;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_normalConstraints;
    NSArray *_axConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *axConstraints; // @synthesize axConstraints=_axConstraints;
@property(retain, nonatomic) NSArray *normalConstraints; // @synthesize normalConstraints=_normalConstraints;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) unsigned long long currentCellType; // @synthesize currentCellType=_currentCellType;
- (void)traitCollectionDidChange:(id)arg1;
- (void)createConstarints;
- (void)setupLabels;
- (void)loadView;
- (id)initWithType:(unsigned long long)arg1;

@end

