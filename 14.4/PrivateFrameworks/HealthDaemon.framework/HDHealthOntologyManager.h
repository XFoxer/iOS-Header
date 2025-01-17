//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSimpleGraphDatabase, HKObserverSet, NSCache, NSDictionary, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HDHealthOntologyManager : NSObject
{
    NSDictionary *_codingSystemPriorityInfo;
    NSUUID *_assetAvailabilityRegistrationToken;
    struct os_unfair_lock_s _ivarLock;
    _Atomic _Bool _invalidated;
    NSCache *_nebulousConceptCache;
    HKObserverSet *_observers;
    _Bool _useCache;
    NSCache *_conceptsByIdentifierCache;
    _Atomic _Bool _enabled;
    _Bool _unitTest_useEmbeddedOntology;
    _Bool _unitTest_useEmbeddedOntologyAsset;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDSimpleGraphDatabase *_graphDatabase;
    NSURL *_ontologyURL;
}

+ (void)obliterateWithProfile:(id)arg1 reason:(id)arg2;
+ (id)_ontologyURLForProfile:(id)arg1;
+ (_Bool)graphDatabase:(id)arg1 setVersion:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool unitTest_useEmbeddedOntologyAsset; // @synthesize unitTest_useEmbeddedOntologyAsset=_unitTest_useEmbeddedOntologyAsset;
@property(readonly, nonatomic) _Bool unitTest_useEmbeddedOntology; // @synthesize unitTest_useEmbeddedOntology=_unitTest_useEmbeddedOntology;
@property(readonly, copy, nonatomic) NSURL *ontologyURL; // @synthesize ontologyURL=_ontologyURL;
@property(retain, nonatomic) HDSimpleGraphDatabase *graphDatabase; // @synthesize graphDatabase=_graphDatabase;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)hd_unitTesting_clearCache;
- (void)hd_unitTesting_disableCache;
- (void)hd_unitTesting_setupDatabase;
- (void)hd_unitTesting_closeDatabase;
- (void)_handleOntologyAssetAvailabilityUpdate:(long long)arg1;
- (void)obliterateWithReason:(id)arg1;
- (void)importUsingAssetAtLocation:(id)arg1 rememberLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_createOntologyDirectoryIfNecessaryWithError:(id *)arg1;
- (_Bool)performGraphDatabaseWork:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_notifyObserversReferenceOntologyCreated;
- (void)_notifyObserversReferenceOntologyDidUpdateWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_notifyObserversReferenceOntologyWillUpdate;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)allAssociatedConceptsWithError:(id *)arg1;
- (id)conceptsAssociatedWithSampleUUID:(id)arg1 error:(id *)arg2;
- (id)conceptsAssociatedWithSample:(id)arg1 error:(id *)arg2;
- (id)sampleUUIDsAssociatedWithConcept:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllAssociationsToSampleUUID:(id)arg1 error:(id *)arg2;
- (_Bool)breakAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id *)arg3;
- (_Bool)makeAssociationFromSampleUUID:(id)arg1 toConceptIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)insertAssociations:(id)arg1 error:(id *)arg2;
- (_Bool)makeAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id *)arg3;
- (long long)countOfConceptsAssociatedWithUserRecords:(id *)arg1;
- (id)_ontologyConfigurationForCountryCode:(id)arg1;
- (id)relationshipsForConceptWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)work_relationshipsForConceptWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)conceptsWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id *)arg3;
- (id)conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id *)arg3;
- (id)_conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(_Bool)arg3 error:(id *)arg4;
- (id)_queue_conceptsWithGraphDatabaseCall:(CDUnknownBlockType)arg1 loadRelationships:(_Bool)arg2 error:(id *)arg3;
- (id)_conceptsWithGraphDatabaseCall:(CDUnknownBlockType)arg1 loadRelationships:(_Bool)arg2 error:(id *)arg3;
- (id)conceptForName:(id)arg1 error:(id *)arg2;
- (id)conceptsForIdentifiers:(id)arg1 expectedOntologyVersion:(id)arg2 loadRelationships:(_Bool)arg3 error:(id *)arg4;
- (id)conceptForIdentifier:(id)arg1 loadRelationships:(_Bool)arg2 error:(id *)arg3;
- (id)_conceptWithGraphDatabaseCall:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_work_conceptFromGraphNode:(id)arg1 preloadRelationships:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_work_graphDatabase:(id)arg1 insertConcept:(id)arg2 error:(id *)arg3;
- (id)_work_graphDatabase:(id)arg1 newConceptIdentifierWithName:(id)arg2 error:(id *)arg3;
- (id)_work_graphDatabase:(id)arg1 findConceptForCoding:(id)arg2 error:(id *)arg3;
- (id)_work_graphDatabase:(id)arg1 findConceptsForCodings:(id)arg2 error:(id *)arg3;
- (id)conceptForCodingCollection:(id)arg1 country:(id)arg2;
- (id)_work_graphDatabase:(id)arg1 resolveMercuryConceptForCodings:(id)arg2 country:(id)arg3 error:(id *)arg4;
- (void)_queue_createAndInitializeIfNeeded;
- (id)userVersionWithError:(id *)arg1;
- (id)_queue_graphDatabaseUserVersionWithError:(id *)arg1;
- (id)versionWithError:(id *)arg1;
- (long long)_queue_graphDatabaseVersionWithError:(id *)arg1;
- (id)_graphDatabaseUserVersionImplementation:(id)arg1 error:(id *)arg2;
- (_Bool)hd_unitTesting_setVersion:(id)arg1 error:(id *)arg2;
- (long long)_graphDatabaseVersionImplementation:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_importReferenceOntology;
- (_Bool)_queue_copyEmbeddedReferenceOntology;
- (_Bool)_queue_insertRawRelationshipIntoDatabase:(id)arg1 valueString:(id)arg2;
- (_Bool)_queue_insertRawAttributeIntoDatabase:(id)arg1 valueString:(id)arg2;
- (_Bool)_queue_insertTwoItemRawOntologyValueIntoDatabase:(id)arg1 table:(id)arg2 valueString:(id)arg3;
- (_Bool)useEmbeddedOntologyAsset;
- (_Bool)useEmbeddedOntology;
@property(readonly, nonatomic) _Bool ignoresOntologyAssetAvailabilityChanges;
@property(readonly, nonatomic) _Bool ignoresVersionCheckDuringReferenceOntologyImport;
- (id)_referenceOntologyFileURL;
- (id)_ontologyAssetManager;
- (id)_queue_graphDatabase;
- (void)invalidateAndWait;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_queue_closeDatabase;
- (void)_queue_clearCachedConceptWithIdentifier:(id)arg1;
- (void)_queue_clearCache;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

