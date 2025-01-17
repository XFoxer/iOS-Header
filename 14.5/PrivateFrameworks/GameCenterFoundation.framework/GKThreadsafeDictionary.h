//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)dictionaryCopy;
- (id)allKeys;
- (void)writeToDictionary:(CDUnknownBlockType)arg1;
- (void)readFromDictionary:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (id)allObjects;
- (id)description;
- (id)initWithName:(id)arg1;

@end

