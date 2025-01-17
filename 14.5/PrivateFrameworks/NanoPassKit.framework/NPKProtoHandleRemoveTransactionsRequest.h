//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_identifiers;
    NSMutableArray *_passIDs;
}

+ (Class)passIDsType;
+ (Class)identifiersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *passIDs; // @synthesize passIDs=_passIDs;
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)passIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passIDsCount;
- (void)addPassIDs:(id)arg1;
- (void)clearPassIDs;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)arg1;
- (void)clearIdentifiers;

@end

