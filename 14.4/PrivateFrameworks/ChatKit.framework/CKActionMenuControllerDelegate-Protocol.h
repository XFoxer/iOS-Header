//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKActionMenuController;

@protocol CKActionMenuControllerDelegate <NSObject>

@optional
- (void)actionMenuControllerDidDismissActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerDidPresentActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(CKActionMenuController *)arg1 animated:(_Bool)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(CKActionMenuController *)arg1 animated:(_Bool)arg2;
@end

