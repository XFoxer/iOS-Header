//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage : MFMailMessage
{
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
    DAMailMessage *_DAMailMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;
- (unsigned long long)messageSize;
- (id)remoteMailboxURL;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageBody;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)headers;
- (id)mailbox;
- (id)externalConversationID;
- (id)remoteID;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

@end

