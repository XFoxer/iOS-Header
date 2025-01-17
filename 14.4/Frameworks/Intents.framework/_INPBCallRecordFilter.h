//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallRecordFilter-Protocol.h>

@class NSArray, NSString;

@interface _INPBCallRecordFilter : PBCodable <_INPBCallRecordFilter, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _callTypes;
    struct {
        unsigned int callCapability:1;
        unsigned int preferredCallProvider:1;
    } _has;
    int _callCapability;
    int _preferredCallProvider;
    NSArray *_participants;
}

+ (_Bool)supportsSecureCoding;
+ (Class)participantsType;
- (void).cxx_destruct;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
@property(nonatomic) _Bool hasPreferredCallProvider;
- (id)participantsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long participantsCount;
- (void)addParticipants:(id)arg1;
- (void)clearParticipants;
- (int)StringAsCallTypes:(id)arg1;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callTypesCount;
- (void)addCallTypes:(int)arg1;
- (void)clearCallTypes;
@property(readonly, nonatomic) int *callTypes;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsCallCapability:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
@property(nonatomic) _Bool hasCallCapability;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

