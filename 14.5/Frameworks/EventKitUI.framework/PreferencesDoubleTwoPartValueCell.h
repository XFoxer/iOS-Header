//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/PreferencesTwoPartValueCell.h>

@class TwoPartTextLabel, UILabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell
{
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}

- (void).cxx_destruct;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;
@property(readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel2;
@property(readonly, retain, nonatomic) UILabel *textLabel2;

@end

