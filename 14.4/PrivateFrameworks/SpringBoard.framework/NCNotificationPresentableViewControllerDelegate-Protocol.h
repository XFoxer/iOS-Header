//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/BNPresentableObserving-Protocol.h>

@class NCNotificationPresentableViewController;

@protocol NCNotificationPresentableViewControllerDelegate <BNPresentableObserving>
- (void)notificationPresentableViewController:(NCNotificationPresentableViewController *)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3;
- (_Bool)notificationPresentableViewControllerShouldPresentLongLook:(NCNotificationPresentableViewController *)arg1;
@end

