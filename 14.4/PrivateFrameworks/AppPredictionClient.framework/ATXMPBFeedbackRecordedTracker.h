//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXMPBFeedbackRecordedTracker : PBCodable <NSCopying>
{
    NSString *_consumerSubType;
    int _engagementType;
    CDStruct_c054b854 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *consumerSubType; // @synthesize consumerSubType=_consumerSubType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConsumerSubType;
- (int)StringAsEngagementType:(id)arg1;
- (id)engagementTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEngagementType;
@property(nonatomic) int engagementType; // @synthesize engagementType=_engagementType;

@end

