//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaKitEntityRelationshipPayloadProvider-Protocol.h>

@class MSVSQLDatabase, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MSVSQLDatabase *_database;
    NSHashTable *_observers;
}

+ (void)setPrefersInMemoryDatabase:(_Bool)arg1;
+ (_Bool)prefersInMemoryDatabase;
+ (id)sharedServerObjectDatabase;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) MSVSQLDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (_Bool)_createDatabaseSchema;
- (id)_assetsMatchingIdentifierSet:(id)arg1 query:(id)arg2;
- (id)_initWithDatabaseCreationBlock:(CDUnknownBlockType)arg1;
- (id)payloadForRelatedEntityWithIdentifierSet:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)importAssetsFromRequest:(id)arg1 error:(id *)arg2;
- (void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg1;
- (id)assetsMatchingIdentifierSet:(id)arg1;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 childKey:(id)arg2;
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

