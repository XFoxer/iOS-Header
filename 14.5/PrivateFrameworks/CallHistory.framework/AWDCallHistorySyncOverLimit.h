//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistorySyncOverLimit : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _transactionLogCount;
    struct {
        unsigned int timestamp:1;
        unsigned int transactionLogCount:1;
    } _has;
}

@property(nonatomic) unsigned int transactionLogCount; // @synthesize transactionLogCount=_transactionLogCount;
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
@property(nonatomic) _Bool hasTransactionLogCount;
@property(nonatomic) _Bool hasTimestamp;

@end

