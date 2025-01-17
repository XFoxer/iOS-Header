//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;
@protocol FRSectionViewCellVendor;

@interface FRSectionViewCell : UILabel
{
    unsigned long long _state;
    UIColor *_unselectedTextColor;
    UIColor *_pressedTextColor;
    UIColor *_selectedTextColor;
    id <FRSectionViewCellVendor> _vendor;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FRSectionViewCellVendor> vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *pressedTextColor; // @synthesize pressedTextColor=_pressedTextColor;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityContainer;
- (void)updateTextColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

