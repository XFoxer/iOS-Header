//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <NSCopying>
{
    double _date;
    double _duration;
    long long _swimmingStrokeStyle;
    long long _type;
    HDCodableMetadataDictionary *_metadataDictionary;
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int swimmingStrokeStyle:1;
        unsigned int type:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(nonatomic) _Bool hasSwimmingStrokeStyle;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasType;
- (id)decodedDateIntervalStartDate;

@end

