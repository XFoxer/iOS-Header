//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

#import <SettingsCellular/PSBillingPeriodSource-Protocol.h>

@protocol PSBillingPeriodSelectorSpecifierDelegate;

@interface PSBillingPeriodSelectorSpecifier : PSSpecifier <PSBillingPeriodSource>
{
    id <PSBillingPeriodSelectorSpecifierDelegate> _delegate;
    unsigned long long _selectedPeriod;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedPeriod; // @synthesize selectedPeriod=_selectedPeriod;
@property(nonatomic) __weak id <PSBillingPeriodSelectorSpecifierDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getBillingPeriod:(id)arg1;
- (void)setBillingPeriod:(id)arg1 specifier:(id)arg2;
- (id)initWithStatisticsCache:(id)arg1;

@end

