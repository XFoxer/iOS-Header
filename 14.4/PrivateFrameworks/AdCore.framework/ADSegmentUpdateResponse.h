//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying>
{
    double _maxSegmentUpdateIntervalInSeconds;
    double _segmentRefreshIntervalInSeconds;
    NSString *_idDebug;
    struct {
        unsigned int maxSegmentUpdateIntervalInSeconds:1;
        unsigned int segmentRefreshIntervalInSeconds:1;
    } _has;
}

+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) double maxSegmentUpdateIntervalInSeconds; // @synthesize maxSegmentUpdateIntervalInSeconds=_maxSegmentUpdateIntervalInSeconds;
@property(nonatomic) double segmentRefreshIntervalInSeconds; // @synthesize segmentRefreshIntervalInSeconds=_segmentRefreshIntervalInSeconds;
@property(retain, nonatomic) NSString *idDebug; // @synthesize idDebug=_idDebug;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxSegmentUpdateIntervalInSeconds;
@property(nonatomic) _Bool hasSegmentRefreshIntervalInSeconds;
@property(readonly, nonatomic) _Bool hasIdDebug;

@end

