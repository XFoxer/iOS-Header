//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategorySearchResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sectionHeaderDisplayName;
    NSString *_sectionSubHeaderDisplayName;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _categorySearchResultSectionCellType;
    struct {
        unsigned int has_categorySearchResultSectionCellType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (int)StringAsCategorySearchResultSectionCellType:(id)arg1;
- (id)categorySearchResultSectionCellTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCategorySearchResultSectionCellType;
@property(nonatomic) int categorySearchResultSectionCellType;
@property(retain, nonatomic) NSString *sectionSubHeaderDisplayName;
@property(readonly, nonatomic) _Bool hasSectionSubHeaderDisplayName;
@property(retain, nonatomic) NSString *sectionHeaderDisplayName;
@property(readonly, nonatomic) _Bool hasSectionHeaderDisplayName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

