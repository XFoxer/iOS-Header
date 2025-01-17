//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUInteractiveTileTracker, PUTileController;

@protocol PUInteractiveTileTrackerDelegate <NSObject>

@optional
- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 didStopTrackingTileController:(PUTileController *)arg2;
- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 willStartTrackingTileController:(PUTileController *)arg2;
@end

