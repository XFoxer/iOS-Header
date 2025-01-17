//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying>
{
    int _syncType;
    int _totalPackages;
    struct {
        unsigned int syncType:1;
        unsigned int totalPackages:1;
    } _has;
}

@property(nonatomic) int totalPackages; // @synthesize totalPackages=_totalPackages;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSyncType:(id)arg1;
- (id)syncTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSyncType;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(nonatomic) _Bool hasTotalPackages;

@end

