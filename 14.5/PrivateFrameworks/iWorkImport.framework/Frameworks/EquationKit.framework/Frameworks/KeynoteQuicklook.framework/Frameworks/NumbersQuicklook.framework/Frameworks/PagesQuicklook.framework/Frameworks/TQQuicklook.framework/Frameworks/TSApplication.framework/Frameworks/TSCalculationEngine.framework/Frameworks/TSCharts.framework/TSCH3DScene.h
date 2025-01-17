//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TSCH3DCamera, TSCH3DSceneObject, TSCH3DScenePropertyAccessor, TSUNoCopyDictionary;
@protocol TSCH3DSceneDelegate, TSCH3DScenePropertyAccessorFactory;

@interface TSCH3DScene : NSObject
{
    TSCH3DScene *_original;
    NSObject<TSCH3DScenePropertyAccessorFactory> *_accessorFactory;
    TSCH3DScenePropertyAccessor *_accessor;
    NSMutableDictionary *_enumeratorMap;
    NSMutableDictionary *_propertiesMap;
    TSUNoCopyDictionary *_delegateMap;
    TSCH3DSceneObject *_main;
    NSMutableArray *_objects;
    TSCH3DCamera *_camera;
}

+ (id)scene;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCH3DScene *original; // @synthesize original=_original;
- (id)extractObjectsNotOfClasses:(id)arg1;
- (id)extractObjectsNotOfClass:(Class)arg1;
- (id)extractObjectsOfClasses:(id)arg1;
- (id)extractObjects:(_Bool)arg1 ofClasses:(id)arg2;
- (id)extractObjectsOfClass:(Class)arg1;
- (void)removeObjectsNotOfClass:(Class)arg1;
- (void)removeObjectsOfClass:(Class)arg1;
- (id)removeObjects:(_Bool)arg1 ofClasses:(id)arg2 into:(id)arg3;
- (id)removeObjects:(_Bool)arg1 ofClasses:(id)arg2 addTo:(id)arg3;
- (id)returnRemoved:(_Bool)arg1 removeObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)reallocateObjects;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)makeDelegatesFromDelegator:(id)arg1;
@property(readonly, nonatomic) id <TSCH3DSceneDelegate> delegate;
- (void)resetDelegates;
- (void)setDelegate:(id)arg1 forSceneObject:(id)arg2;
- (id)delegateForSceneObject:(id)arg1;
- (void)setDelegate:(id)arg1 forObject:(id)arg2;
- (id)delegateForObject:(id)arg1;
- (void)setPart:(id)arg1 forType:(id)arg2;
- (id)partForType:(id)arg1;
- (void)resetProperties;
- (void)copyPropertiesFromScene:(id)arg1;
- (void)setEnumerator:(id)arg1 properties:(id)arg2 forType:(id)arg3;
- (tmat4x4_3074befe)transform;
@property(retain, nonatomic) TSCH3DScenePropertyAccessor *accessor;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)overrideObjects;
- (void)resetObjects;
- (id)objects;
@property(readonly, nonatomic) NSArray *debugObjects;
@property(retain, nonatomic) TSCH3DCamera *camera;
@property(retain, nonatomic) TSCH3DSceneObject *main;
@property(retain, nonatomic) NSObject<TSCH3DScenePropertyAccessorFactory> *accessorFactory;
- (id)delegateMap;
- (void)setProperties:(id)arg1 forType:(id)arg2;
- (id)mutablePropertiesForType:(id)arg1;
- (id)propertiesForType:(id)arg1;
- (id)propertiesMap;
- (void)setEnumerator:(id)arg1 forType:(id)arg2;
- (id)enumeratorForType:(id)arg1;
- (void)resetEnumerator;
- (id)enumeratorMap;
- (id)clone;
- (id)description;
- (id)init;
- (id)renderCache;

@end

