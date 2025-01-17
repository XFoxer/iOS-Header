//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDeleteShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    NSString *_shortcutSource;
    CDStruct_810980b6 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasShortcutSource;
@property(readonly, nonatomic) _Bool hasGalleryIdentifier;
@property(readonly, nonatomic) _Bool hasAddToSiriBundleIdentifier;
@property(nonatomic) _Bool hasActionCount;
@property(readonly, nonatomic) _Bool hasKey;

@end

