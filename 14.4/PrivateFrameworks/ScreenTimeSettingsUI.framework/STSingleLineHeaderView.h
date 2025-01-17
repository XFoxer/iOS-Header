//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STTableViewHeaderFooterView.h>

#import <ScreenTimeSettingsUI/PSHeaderFooterView-Protocol.h>

@class PSSpecifier, UILabel;

__attribute__((visibility("hidden")))
@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    PSSpecifier *_specifier;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

