//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView
{
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKHairlineView *underlineView; // @synthesize underlineView=_underlineView;
@property(nonatomic) SEL touchedShowcaseCellAction; // @synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction;
@property(retain, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
- (struct CGRect)alignmentRectForText;
- (void)prepareForReuse;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

