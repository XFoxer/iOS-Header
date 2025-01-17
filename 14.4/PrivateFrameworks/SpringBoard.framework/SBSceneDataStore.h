//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SBSceneDataStore : NSObject
{
    NSString *_identifier;
    NSMutableDictionary *_data;
    NSMutableDictionary *_archivedObjectCache;
    CDUnknownBlockType _handler;
    _Bool _invalidated;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=_data) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invokeChangeHandler;
- (void)_invalidate;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)objectForKey:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 data:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;

@end

