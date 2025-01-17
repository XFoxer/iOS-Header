//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushReceivedSlow : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    unsigned int _isFromStorage;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _receiveOffset;
    NSString *_topic;
    CDStruct_f8f5923d _has;
}

@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(nonatomic) unsigned int isFromStorage; // @synthesize isFromStorage=_isFromStorage;
@property(nonatomic) unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) unsigned int receiveOffset; // @synthesize receiveOffset=_receiveOffset;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTopic;
@property(nonatomic) _Bool hasDualChannelState;
@property(nonatomic) _Bool hasIsFromStorage;
@property(nonatomic) _Bool hasPayloadSize;
@property(nonatomic) _Bool hasReceiveOffset;
@property(nonatomic) _Bool hasLinkQuality;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end

