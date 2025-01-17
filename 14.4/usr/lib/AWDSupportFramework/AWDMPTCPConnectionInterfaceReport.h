//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying>
{
    CDStruct_95bda58d _postConnectSubflowFailureErrors;
    long long _dataInKB;
    long long _dataOutKB;
    unsigned long long _timestamp;
    NSString *_interfaceName;
    int _secondaryFlowFailureCount;
    int _secondaryFlowSuccessCount;
    _Bool _postConnectTcpFallbackCount;
    struct {
        unsigned int dataInKB:1;
        unsigned int dataOutKB:1;
        unsigned int timestamp:1;
        unsigned int secondaryFlowFailureCount:1;
        unsigned int secondaryFlowSuccessCount:1;
        unsigned int postConnectTcpFallbackCount:1;
    } _has;
}

@property(nonatomic) _Bool postConnectTcpFallbackCount; // @synthesize postConnectTcpFallbackCount=_postConnectTcpFallbackCount;
@property(nonatomic) int secondaryFlowFailureCount; // @synthesize secondaryFlowFailureCount=_secondaryFlowFailureCount;
@property(nonatomic) int secondaryFlowSuccessCount; // @synthesize secondaryFlowSuccessCount=_secondaryFlowSuccessCount;
@property(nonatomic) long long dataOutKB; // @synthesize dataOutKB=_dataOutKB;
@property(nonatomic) long long dataInKB; // @synthesize dataInKB=_dataInKB;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPostConnectTcpFallbackCount;
@property(nonatomic) _Bool hasSecondaryFlowFailureCount;
@property(nonatomic) _Bool hasSecondaryFlowSuccessCount;
@property(nonatomic) _Bool hasDataOutKB;
@property(nonatomic) _Bool hasDataInKB;
- (void)setPostConnectSubflowFailureErrors:(int *)arg1 count:(unsigned long long)arg2;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (void)clearPostConnectSubflowFailureErrors;
@property(readonly, nonatomic) int *postConnectSubflowFailureErrors;
@property(readonly, nonatomic) unsigned long long postConnectSubflowFailureErrorsCount;
@property(readonly, nonatomic) _Bool hasInterfaceName;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

