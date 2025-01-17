//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKUISettingsGroupDescription;
@protocol SKUISettingsGroupControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupController : NSObject
{
    id <SKUISettingsGroupControllerDelegate> _delegate;
    NSMutableArray *_settingDescriptions;
    SKUISettingsGroupDescription *_settingsGroupDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription; // @synthesize settingsGroupDescription=_settingsGroupDescription;
@property(retain, nonatomic) NSMutableArray *settingDescriptions; // @synthesize settingDescriptions=_settingDescriptions;
@property(nonatomic) __weak id <SKUISettingsGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewForSettingDescription:(id)arg1;
- (void)_reloadSettingDescription:(id)arg1;
- (void)attachSettingDescription:(id)arg1;

@end

