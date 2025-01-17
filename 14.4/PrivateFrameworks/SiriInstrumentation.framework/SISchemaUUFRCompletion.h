//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, SISchemaSiriResponseContext;

@interface SISchemaUUFRCompletion : PBCodable
{
    int _completionStatus;
    NSArray *_homeKitAccessoryResponses;
    SISchemaSiriResponseContext *_siriResponseContext;
    struct {
        unsigned int completionStatus:1;
    } _has;
    _Bool _hasSiriResponseContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSiriResponseContext; // @synthesize hasSiriResponseContext=_hasSiriResponseContext;
@property(retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // @synthesize siriResponseContext=_siriResponseContext;
@property(copy, nonatomic) NSArray *homeKitAccessoryResponses; // @synthesize homeKitAccessoryResponses=_homeKitAccessoryResponses;
@property(nonatomic) int completionStatus; // @synthesize completionStatus=_completionStatus;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeKitAccessoryResponseCount;
- (void)addHomeKitAccessoryResponse:(id)arg1;
- (void)clearHomeKitAccessoryResponse;
@property(nonatomic) _Bool hasCompletionStatus;

@end

