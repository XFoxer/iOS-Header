//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSpringBoardSOSAlertResponse : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_response;
    NSString *_uUID;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *uUID; // @synthesize uUID=_uUID;
@property(retain, nonatomic) NSString *response; // @synthesize response=_response;
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
@property(readonly, nonatomic) _Bool hasUUID;
@property(readonly, nonatomic) _Bool hasResponse;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

