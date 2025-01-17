//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>
#import <CompanionSync/SYChange-Protocol.h>

@class NSData, NSString;

@interface SYChange : PBCodable <SYChange, NSCopying>
{
    unsigned long long _version;
    NSData *_changeData;
    NSString *_objectId;
    NSString *_sequencer;
    int _type;
}

+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sequencer; // @synthesize sequencer=_sequencer;
@property(retain, nonatomic) NSData *changeData; // @synthesize changeData=_changeData;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSequencer;
@property(readonly, nonatomic) _Bool hasChangeData;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
- (id)objectForStore:(id)arg1;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2;
- (id)changeObjectWithSerializer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

