//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity, NSCopying>
{
    long long _persistentID;
}

+ (id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+ (id)checkConstraints;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)_generateDisambiguatedDatabaseTableName;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(id)arg1;
+ (id)allDatabaseColumnNames;
+ (id)privateSubEntities;
+ (_Bool)isTemporary;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)createTableSQL;
+ (void)enumerateColumnsWithBlock:(CDUnknownBlockType)arg1;
+ (void)_enumerateColumnNamesWithBlock:(CDUnknownBlockType)arg1;
+ (void)_enumerateColumnDefinitionsWithBlock:(CDUnknownBlockType)arg1;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)disambiguatedDatabaseTable;
+ (id)tableAliases;
+ (id)databaseTable;
+ (id)databaseName;
+ (_Bool)updateProperties:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)insertOrReplaceEntity:(_Bool)arg1 database:(id)arg2 properties:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)additionalPredicateForEnumeration;
+ (id)updateSQLForProperties:(id)arg1 predicate:(id)arg2;
+ (id)insertSQLForProperties:(id)arg1 shouldReplace:(_Bool)arg2;
+ (id)entityWithPersistentID:(id)arg1;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingTerms:(id)arg4 groupBy:(id)arg5;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (_Bool)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingTerms:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id *)arg8 enumerationHandler:(CDUnknownBlockType)arg9;
+ (_Bool)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
+ (id)firstInDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 error:(id *)arg4;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3;
- (id)UUIDForProperty:(id)arg1 database:(id)arg2;
- (id)stringForProperty:(id)arg1 database:(id)arg2;
- (id)numberForProperty:(id)arg1 database:(id)arg2;
- (id)dateForProperty:(id)arg1 database:(id)arg2;
- (_Bool)booleanForProperty:(id)arg1 database:(id)arg2;
- (id)valueForProperty:(id)arg1 database:(id)arg2;
- (_Bool)getValuesForProperties:(id)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)existsInDatabase:(id)arg1;
- (void)willDeleteFromDatabase:(id)arg1;
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)updateProperties:(id)arg1 database:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (id)updateSQLForProperties:(id)arg1;
- (id)initWithPersistentID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

