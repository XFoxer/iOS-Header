//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOEVStateInfo, GEOWaypointInfo, NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRouteLeg : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointInfo *_destinationWaypointInfo;
    GEOEVStateInfo *_evStateInfo;
    GEOWaypointInfo *_originWaypointInfo;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_destinationWaypointInfo:1;
        unsigned int read_evStateInfo:1;
        unsigned int read_originWaypointInfo:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property(readonly, nonatomic) _Bool hasDestinationWaypointInfo;
@property(retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property(readonly, nonatomic) _Bool hasOriginWaypointInfo;
@property(retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property(readonly, nonatomic) _Bool hasEvStateInfo;
@property(retain, nonatomic) NSData *zilchPoints;
@property(readonly, nonatomic) _Bool hasZilchPoints;
- (id)initWithData:(id)arg1;
- (id)init;

@end

