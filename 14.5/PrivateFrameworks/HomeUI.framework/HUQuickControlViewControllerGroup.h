//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject
{
    HUQuickControlViewController *_primaryViewController;
    NSSet *_alternateViewControllers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *alternateViewControllers; // @synthesize alternateViewControllers=_alternateViewControllers;
@property(readonly, nonatomic) HUQuickControlViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
- (id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2;

@end

