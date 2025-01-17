//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSSScreenshotImageIdentifierUpdateObserving-Protocol.h"

@class NSMutableArray;
@protocol SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate;

@interface SSSScreenshotGroupImageIdentifierUpdateTracker : NSObject <SSSScreenshotImageIdentifierUpdateObserving>
{
    NSMutableArray *_environmentDescriptionIdentifierForScreenshotsAwaitingImageIdentifierUpdates;
    long long _totalScreenshotsInGroup;
    long long _totalValidScreenshotsInGroup;
    id <SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(readonly, nonatomic) _Bool successful;
@property(readonly, nonatomic) double progressTowardsReceivingAllImageIdentifierUpdates;
- (void)_progressChanged;
- (void)screenshotReceivedImageIdentifierUpdate:(id)arg1;
- (void)addScreenshotToGroup:(id)arg1;

@end

