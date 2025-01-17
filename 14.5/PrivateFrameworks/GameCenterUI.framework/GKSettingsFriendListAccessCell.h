//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSwitchTableCell.h>

@class GKGame, GKGameSettingsInternal;

@interface GKSettingsFriendListAccessCell : PSSwitchTableCell
{
    GKGame *_currentGame;
    GKGameSettingsInternal *_currentGameSettings;
}

+ (long long)cellStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) GKGameSettingsInternal *currentGameSettings; // @synthesize currentGameSettings=_currentGameSettings;
@property(retain, nonatomic) GKGame *currentGame; // @synthesize currentGame=_currentGame;
- (_Bool)canReload;
- (void)controlChanged:(id)arg1;
- (id)getSwitch;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)layoutSubviews;

@end

