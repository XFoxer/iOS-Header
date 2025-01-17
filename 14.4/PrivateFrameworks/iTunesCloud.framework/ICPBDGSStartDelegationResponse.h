//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying>
{
    NSData *_playerAnisetteMID;
    NSData *_playerDeviceGUID;
    NSMutableArray *_playerInfoContextTokens;
    NSString *_playerUserAgent;
}

+ (Class)playerInfoContextTokenType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *playerUserAgent; // @synthesize playerUserAgent=_playerUserAgent;
@property(retain, nonatomic) NSMutableArray *playerInfoContextTokens; // @synthesize playerInfoContextTokens=_playerInfoContextTokens;
@property(retain, nonatomic) NSData *playerDeviceGUID; // @synthesize playerDeviceGUID=_playerDeviceGUID;
@property(retain, nonatomic) NSData *playerAnisetteMID; // @synthesize playerAnisetteMID=_playerAnisetteMID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlayerUserAgent;
- (id)playerInfoContextTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerInfoContextTokensCount;
- (void)addPlayerInfoContextToken:(id)arg1;
- (void)clearPlayerInfoContextTokens;
@property(readonly, nonatomic) _Bool hasPlayerDeviceGUID;
@property(readonly, nonatomic) _Bool hasPlayerAnisetteMID;

@end

