//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync16MapsSyncBaseItem.h>

@class GEOMapItemStorage, MISSING_TYPE, NSNumber, NSSet, NSString;

@interface _TtC8MapsSync20MapsSyncFavoriteItem : _TtC8MapsSync16MapsSyncBaseItem
{
    MISSING_TYPE *_contactHandles;
    MISSING_TYPE *_customName;
    MISSING_TYPE *_hidden;
    MISSING_TYPE *_mapItemStorage;
    MISSING_TYPE *_originatingAddressString;
    MISSING_TYPE *_type;
    MISSING_TYPE *_source;
    MISSING_TYPE *_shortcutIdentifier;
    MISSING_TYPE *_version;
    MISSING_TYPE *_latitude;
    MISSING_TYPE *_longitude;
    MISSING_TYPE *_muid;
}

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)fetchFavoriteItemForShortcutIdentifier:(id)arg1;
+ (id)fetchFavoriteItemForIdentifier:(id)arg1;
+ (void)fetch:(long long)arg1:(long long)arg2:(id)arg3 sort:(long long)arg4 ascending:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSNumber *muid;
@property(nonatomic, readonly) NSNumber *longitude;
@property(nonatomic, readonly) NSNumber *latitude;
@property(nonatomic, readonly) short version;
@property(nonatomic, readonly) NSString *shortcutIdentifier;
@property(nonatomic, readonly) short source;
@property(nonatomic, readonly) short type;
@property(nonatomic, readonly) NSString *originatingAddressString;
@property(nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property(nonatomic, readonly) _Bool hidden;
@property(nonatomic, readonly) NSString *customName;
@property(nonatomic, readonly) NSSet *contactHandles;
@property(nonatomic, readonly) NSString *description;
- (id)initWithObject:(id)arg1;

@end

