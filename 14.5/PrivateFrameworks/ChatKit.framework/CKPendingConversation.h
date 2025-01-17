//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation
{
    _Bool _noAvailableServices;
    IMService *_previousSendingService;
    IMService *_composeSendingService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IMService *composeSendingService; // @synthesize composeSendingService=_composeSendingService;
@property(nonatomic) __weak IMService *previousSendingService; // @synthesize previousSendingService=_previousSendingService;
@property(nonatomic) _Bool noAvailableServices; // @synthesize noAvailableServices=_noAvailableServices;
- (id)deviceIndependentID;
- (id)uniqueIdentifier;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)sendingService;

@end

