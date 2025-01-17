//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class NSArray, UIStackView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentControl : UIControl
{
    _Bool _usesDarkTheme;
    long long _selectedSegmentIndex;
    NSArray *_segmentTitles;
    NSArray *_segmentImages;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *segmentImages; // @synthesize segmentImages=_segmentImages;
@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)_populateSegmentViewsWithCount:(unsigned long long)arg1;
- (void)_removeAllSegmentViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

