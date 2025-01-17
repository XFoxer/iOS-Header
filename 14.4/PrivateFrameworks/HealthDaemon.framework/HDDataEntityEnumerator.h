//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDDatabaseTransactionContext, HDProfile, HDSQLitePredicate, NSArray, NSMutableDictionary, NSNumber, NSSet, NSString, _HKFilter;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor
{
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    _Bool _useLeftJoin;
    _Bool _ignoreEntityClassAdditionalPredicateForEnumeration;
    _Bool _improveJoinOrderingForStartDateIndexSelection;
    NSSet *_objectTypes;
    NSSet *_restrictedSourceEntities;
    CDUnknownBlockType _authorizationFilter;
    NSNumber *_anchor;
    NSNumber *_deletedObjectsAnchor;
    HDSQLitePredicate *_deletedObjectsPredicate;
    NSArray *_sortDescriptors;
    HDDatabaseTransactionContext *_databaseTransactionContext;
    NSString *_lastSQL;
    _HKFilter *_filter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, copy, nonatomic) NSString *lastSQL; // @synthesize lastSQL=_lastSQL;
@property(nonatomic) _Bool improveJoinOrderingForStartDateIndexSelection; // @synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection;
@property(nonatomic) _Bool ignoreEntityClassAdditionalPredicateForEnumeration; // @synthesize ignoreEntityClassAdditionalPredicateForEnumeration=_ignoreEntityClassAdditionalPredicateForEnumeration;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // @synthesize databaseTransactionContext=_databaseTransactionContext;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) HDSQLitePredicate *deletedObjectsPredicate; // @synthesize deletedObjectsPredicate=_deletedObjectsPredicate;
@property(retain, nonatomic) NSNumber *deletedObjectsAnchor; // @synthesize deletedObjectsAnchor=_deletedObjectsAnchor;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) CDUnknownBlockType authorizationFilter; // @synthesize authorizationFilter=_authorizationFilter;
@property(retain, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(readonly, nonatomic) NSSet *objectTypes; // @synthesize objectTypes=_objectTypes;
- (id)_joinClauseForProperties:(id)arg1;
- (_Bool)_enumerateObjectsWithDatabaseTransaction:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_setOrderingTermsOnDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateIncludingDeletedObjects:(_Bool)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)encodingOptionForKey:(id)arg1;
- (void)setEncodingOption:(id)arg1 forKey:(id)arg2;
- (void)addEncodingOptionsFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithObjectTypes:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithEntityClass:(Class)arg1 profile:(id)arg2;

@end

