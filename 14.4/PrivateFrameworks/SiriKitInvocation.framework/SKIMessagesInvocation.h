//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKIMessagesInvocation : NSObject
{
}

+ (id)makeParameterMetadataForParameterNamed:(id)arg1;
+ (id)makeParameterMetadataForIntent:(id)arg1;
+ (id)beginSiriRequestForApp:(id)arg1;
+ (id)composeReplyRequestToConversationIdentifier:(id)arg1 inApp:(id)arg2;
+ (id)composeNewMessageRequestToContact:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 inApp:(id)arg4;
+ (id)composeNewMessageRequestInApp:(id)arg1;
+ (id)readMessagesRequestFromConversationIdentifier:(id)arg1 inApp:(id)arg2;
+ (id)readMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2;
+ (id)announceMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2;

@end

