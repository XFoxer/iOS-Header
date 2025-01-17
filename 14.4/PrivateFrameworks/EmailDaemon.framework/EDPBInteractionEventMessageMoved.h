//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBInteractionEventMessageMoved : PBCodable <EDPBDataSetters, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _fromMailboxId;
    long long _messageId;
    long long _toMailboxId;
    int _fromMailboxType;
    int _toMailboxType;
    CDStruct_b83e950b _has;
}

@property(nonatomic) long long toMailboxId; // @synthesize toMailboxId=_toMailboxId;
@property(nonatomic) long long fromMailboxId; // @synthesize fromMailboxId=_fromMailboxId;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsToMailboxType:(id)arg1;
- (id)toMailboxTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasToMailboxType;
@property(nonatomic) int toMailboxType; // @synthesize toMailboxType=_toMailboxType;
@property(nonatomic) _Bool hasToMailboxId;
- (int)StringAsFromMailboxType:(id)arg1;
- (id)fromMailboxTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFromMailboxType;
@property(nonatomic) int fromMailboxType; // @synthesize fromMailboxType=_fromMailboxType;
@property(nonatomic) _Bool hasFromMailboxId;
@property(nonatomic) _Bool hasMessageId;
@property(nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasAccountId;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3;

@end

