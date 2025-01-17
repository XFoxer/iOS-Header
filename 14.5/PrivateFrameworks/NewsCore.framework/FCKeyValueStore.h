//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>

@class FCKeyValueStoreClassRegistry, FCKeyValueStoreSavePolicy, NSDictionary, NSMutableDictionary, NSString;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding>
{
    _Bool _shouldExportJSONSidecar;
    _Bool _unsafeWaitingOnSave;
    NSString *_storeDirectory;
    NSString *_name;
    unsigned long long _storeSize;
    NSMutableDictionary *_unsafeObjectsByKey;
    id <NFLocking> _lock;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id <FCKeyValueStoreMigrating> _migrator;
    FCKeyValueStoreSavePolicy *_savePolicy;
    CDUnknownBlockType _objectHandler;
    CDUnknownBlockType _arrayObjectHandler;
    CDUnknownBlockType _dictionaryKeyHandler;
    CDUnknownBlockType _dictionaryValueHandler;
}

- (void).cxx_destruct;
- (unsigned long long)storeSize;
@property(readonly, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(nonatomic) _Bool shouldExportJSONSidecar; // @synthesize shouldExportJSONSidecar=_shouldExportJSONSidecar;
- (id)jsonEncodableObject;
- (void)setCloudBackupEnabled:(_Bool)arg1;
- (void)setJSONEncodingHandlersWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;
- (void)save;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *asDictionary;
- (void)enumerateKeysAndObjectsForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addAllEntriesToDictionary:(id)arg1;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (_Bool)boolValueForKey:(id)arg1;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)replaceContentsWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6 savePolicy:(id)arg7;
- (id)init;

@end

