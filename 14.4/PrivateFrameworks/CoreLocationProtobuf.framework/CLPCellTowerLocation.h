//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPCellTowerLocation : PBCodable <NSCopying>
{
    NSString *_appBundleId;
    int _arfcn;
    int _ci;
    int _ecn0;
    int _lac;
    CLPLocation *_location;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    NSString *_operatorName;
    int _psc;
    int _rat;
    int _rscp;
    int _rssi;
    int _serverHash;
    NSString *_serviceProviderName;
    int _transmit;
    _Bool _isLimitedService;
    CDStruct_648273eb _has;
}

+ (Class)neighborType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serviceProviderName; // @synthesize serviceProviderName=_serviceProviderName;
@property(nonatomic) _Bool isLimitedService; // @synthesize isLimitedService=_isLimitedService;
@property(retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) int rat; // @synthesize rat=_rat;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) int transmit; // @synthesize transmit=_transmit;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) int psc; // @synthesize psc=_psc;
@property(nonatomic) int arfcn; // @synthesize arfcn=_arfcn;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int ci; // @synthesize ci=_ci;
@property(nonatomic) int lac; // @synthesize lac=_lac;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasServiceProviderName;
@property(nonatomic) _Bool hasIsLimitedService;
@property(readonly, nonatomic) _Bool hasNeighborGroup;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (unsigned long long)neighborsCount;
- (void)addNeighbor:(id)arg1;
- (void)clearNeighbors;
@property(nonatomic) _Bool hasRat;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
@property(readonly, nonatomic) _Bool hasOperatorName;
@property(nonatomic) _Bool hasTransmit;
@property(nonatomic) _Bool hasServerHash;
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasPsc;
@property(nonatomic) _Bool hasArfcn;

@end

