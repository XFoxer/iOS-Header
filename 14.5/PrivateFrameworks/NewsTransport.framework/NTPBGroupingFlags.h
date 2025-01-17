//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBGroupingFlags : PBCodable <NSCopying>
{
    _Bool _isEligibleForGrouping;
    _Bool _isEligibleForGroupingIfFavorited;
    _Bool _isHidden;
    CDStruct_d00ad9e3 _has;
}

@property(nonatomic) _Bool isEligibleForGroupingIfFavorited; // @synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited;
@property(nonatomic) _Bool isEligibleForGrouping; // @synthesize isEligibleForGrouping=_isEligibleForGrouping;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsEligibleForGroupingIfFavorited;
@property(nonatomic) _Bool hasIsEligibleForGrouping;
@property(nonatomic) _Bool hasIsHidden;

@end

