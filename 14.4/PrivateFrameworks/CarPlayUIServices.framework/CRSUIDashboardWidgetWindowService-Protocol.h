//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayUIServices/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, NSArray;

@protocol CRSUIDashboardWidgetWindowService <NSObject>
- (void)clientSetWantsLargeSize:(_Bool)arg1 fenceHandle:(BKSAnimationFenceHandle *)arg2 animationSettings:(BSAnimationSettings *)arg3;
- (void)clientSetFocusableItems:(NSArray *)arg1;
- (void)updateContextId:(unsigned int)arg1;
@end

