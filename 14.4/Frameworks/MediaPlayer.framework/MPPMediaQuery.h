//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying>
{
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    _Bool _filteringDisabled;
    _Bool _includeNonLibraryEntities;
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;
}

+ (Class)staticEntityIdentifiersType;
+ (Class)filterPredicatesType;
- (void).cxx_destruct;
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property(nonatomic) _Bool filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property(retain, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIncludeNonLibraryEntities;
- (int)StringAsStaticEntityType:(id)arg1;
- (id)staticEntityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStaticEntityType;
@property(nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)staticEntityIdentifiersCount;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)clearStaticEntityIdentifiers;
- (int)StringAsEntityOrder:(id)arg1;
- (id)entityOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityOrder;
@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(nonatomic) _Bool hasFilteringDisabled;
- (int)StringAsGroupingType:(id)arg1;
- (id)groupingTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupingType;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterPredicatesCount;
- (void)addFilterPredicates:(id)arg1;
- (void)clearFilterPredicates;

@end

