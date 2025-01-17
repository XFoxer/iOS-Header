//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplateDelegate-Protocol.h>

@class CPNavigationAlert, NSUUID;

@protocol CPMapClientTemplateDelegate <CPTemplateDelegate>
- (void)clientTripAlreadyStartedException;
- (void)clientTripCanceledByExternalNavigation;
- (void)clientNavigationAlertDidDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertDidAppear:(CPNavigationAlert *)arg1;
- (void)clientNavigationAlertWillAppear:(CPNavigationAlert *)arg1;
- (void)clientPanViewWillDisappear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewDidAppear;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)clientPanGestureBegan;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)startTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;
- (void)previewTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;
@end

