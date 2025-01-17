//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol EQKitLayout;

@interface EQKitiOSEquationView : UIView
{
    id <EQKitLayout> _equationLayout;
    double _viewScale;
    double _padding;
    UIColor *_textColor;
    struct CGPoint _offset;
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) id <EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

