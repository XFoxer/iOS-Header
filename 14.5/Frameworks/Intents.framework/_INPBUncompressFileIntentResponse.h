//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBUncompressFileIntentResponse-Protocol.h>

@class NSString, _INPBString;

@interface _INPBUncompressFileIntentResponse : PBCodable <_INPBUncompressFileIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_f2ecb737 _has;
    _Bool _success;
    _INPBString *_entityName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

