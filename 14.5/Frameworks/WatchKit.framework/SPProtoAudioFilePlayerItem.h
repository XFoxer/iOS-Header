//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class SPProtoAudioFilePlayerItemSetCurrentTime, SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoObjectMessage;

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying>
{
    SPProtoObjectMessage *_destroy;
    SPProtoObjectMessage *_getCurrentTime;
    SPProtoObjectMessage *_notifyDidPlayToEndTime;
    SPProtoObjectMessage *_notifyFailedToPlayToEndTime;
    SPProtoObjectMessage *_notifyTimeJumped;
    SPProtoAudioFilePlayerItemSetCurrentTime *_setItemCurrentTime;
    SPProtoAudioFilePlayerStatus *_setStatus;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_upsertWithAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPProtoAudioFilePlayerItemSetCurrentTime *setItemCurrentTime; // @synthesize setItemCurrentTime=_setItemCurrentTime;
@property(retain, nonatomic) SPProtoObjectMessage *notifyFailedToPlayToEndTime; // @synthesize notifyFailedToPlayToEndTime=_notifyFailedToPlayToEndTime;
@property(retain, nonatomic) SPProtoObjectMessage *notifyDidPlayToEndTime; // @synthesize notifyDidPlayToEndTime=_notifyDidPlayToEndTime;
@property(retain, nonatomic) SPProtoObjectMessage *notifyTimeJumped; // @synthesize notifyTimeJumped=_notifyTimeJumped;
@property(retain, nonatomic) SPProtoObjectMessage *getCurrentTime; // @synthesize getCurrentTime=_getCurrentTime;
@property(retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus; // @synthesize setStatus=_setStatus;
@property(retain, nonatomic) SPProtoObjectMessage *destroy; // @synthesize destroy=_destroy;
@property(retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset; // @synthesize upsertWithAsset=_upsertWithAsset;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSetItemCurrentTime;
@property(readonly, nonatomic) _Bool hasNotifyFailedToPlayToEndTime;
@property(readonly, nonatomic) _Bool hasNotifyDidPlayToEndTime;
@property(readonly, nonatomic) _Bool hasNotifyTimeJumped;
@property(readonly, nonatomic) _Bool hasGetCurrentTime;
@property(readonly, nonatomic) _Bool hasSetStatus;
@property(readonly, nonatomic) _Bool hasDestroy;
@property(readonly, nonatomic) _Bool hasUpsertWithAsset;
- (id)sockPuppetMessage;

@end

