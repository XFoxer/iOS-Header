//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class MFMessageComposeViewController, NSArray, NSString;

@protocol MFMessageComposeViewControllerInternalDelegate <MFMessageComposeViewControllerDelegate>
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg1 shouldSendMessage:(NSString *)arg2 toRecipients:(NSArray *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (void)messageComposeViewControllerDidShowEntryViewContent:(MFMessageComposeViewController *)arg1;
@end

