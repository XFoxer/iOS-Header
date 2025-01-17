//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPDeviceInfo : PBCodable <NSCopying>
{
    NSMutableArray *_internalTestConfigs;
    NSString *_processName;
    NSString *_processUuid;
    NSString *_processVersion;
    NSString *_productBuild;
    NSString *_productName;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_userDefaultTestName;
    _Bool _isAppleInternal;
    struct {
        unsigned int isAppleInternal:1;
    } _has;
}

+ (Class)internalTestConfigType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *internalTestConfigs; // @synthesize internalTestConfigs=_internalTestConfigs;
@property(retain, nonatomic) NSString *userDefaultTestName; // @synthesize userDefaultTestName=_userDefaultTestName;
@property(retain, nonatomic) NSString *processUuid; // @synthesize processUuid=_processUuid;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)internalTestConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)internalTestConfigsCount;
- (void)addInternalTestConfig:(id)arg1;
- (void)clearInternalTestConfigs;
@property(readonly, nonatomic) _Bool hasUserDefaultTestName;
@property(readonly, nonatomic) _Bool hasProcessUuid;
@property(readonly, nonatomic) _Bool hasProcessVersion;
@property(readonly, nonatomic) _Bool hasProcessName;
@property(nonatomic) _Bool hasIsAppleInternal;
@property(readonly, nonatomic) _Bool hasProductBuild;
@property(readonly, nonatomic) _Bool hasProductVersion;
@property(readonly, nonatomic) _Bool hasProductType;
@property(readonly, nonatomic) _Bool hasProductName;

@end

