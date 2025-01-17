//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying>
{
    CDStruct_5df41632 _countOfArticlesExposedEachSections;
    NSString *_widgetSectionIdsExposed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *widgetSectionIdsExposed; // @synthesize widgetSectionIdsExposed=_widgetSectionIdsExposed;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCountOfArticlesExposedEachSections:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (void)addCountOfArticlesExposedEachSection:(long long)arg1;
- (void)clearCountOfArticlesExposedEachSections;
@property(readonly, nonatomic) long long *countOfArticlesExposedEachSections;
@property(readonly, nonatomic) unsigned long long countOfArticlesExposedEachSectionsCount;
@property(readonly, nonatomic) _Bool hasWidgetSectionIdsExposed;
- (void)dealloc;

@end

