//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPlayButtonTileViewController;

@protocol PUPlayButtonTileViewControllerDelegate <NSObject>

@optional
- (double)playButtonTileViewController:(PUPlayButtonTileViewController *)arg1 delayForButtonAnimation:(_Bool)arg2;
- (void)playButtonTileViewControllerDidTapButton:(PUPlayButtonTileViewController *)arg1;
- (_Bool)playButtonTileViewControllerShouldShowPauseButton:(PUPlayButtonTileViewController *)arg1;
@end

