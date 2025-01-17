//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>
{
    NSMutableArray *_wrappingKeyIds;
}

+ (Class)wrappingKeyIdsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *wrappingKeyIds; // @synthesize wrappingKeyIds=_wrappingKeyIds;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)wrappingKeyIdsCount;
- (void)addWrappingKeyIds:(id)arg1;
- (void)clearWrappingKeyIds;

@end

