//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCAppLibrary, BRCPrivateServerZone, BRCProblemReport, BRCServerZoneHealthState, NSMapTable, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface BRCPrivateClientZone : BRCClientZone
{
    NSMutableArray *_syncBarriers;
    BRCServerZoneHealthState *_zoneHealthState;
    BRCProblemReport *_problemReport;
    NSMutableArray *_lastResets;
    NSMutableArray *_faultsLiveBarriers;
    NSMutableSet *_appLibraries;
    BRCAppLibrary *_defaultAppLibrary;
    NSMapTable *_pcsChainFolderOperations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState; // @synthesize zoneHealthState=_zoneHealthState;
@property(readonly, nonatomic) NSSet *appLibraries; // @synthesize appLibraries=_appLibraries;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (_Bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isDocumentScopePublic;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (_Bool)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (_Bool)recomputeAppSyncBlockState;
@property(readonly, nonatomic) _Bool zoneHealthNeedsSyncUp;
- (void)zoneHealthWasReset;
- (void)syncedDownZoneHealthState:(id)arg1;
@property(readonly, nonatomic) _Bool resetFrequencyIsTooHigh;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (void)clearProblemReport;
- (void)updateWithPlist:(id)arg1;
- (id)plist;
- (void)resume;
- (void)setServerZone:(id)arg1;
- (_Bool)dumpTablesToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(_Bool)arg6;
- (void)removeAppLibrary:(id)arg1;
- (void)addAppLibrary:(id)arg1 offline:(_Bool)arg2;
- (void)addAppLibrary:(id)arg1;
@property(readonly, nonatomic) NSSet *appLibraryIDs;
- (id)pcsChainOperationForItemID:(id)arg1;
- (void)registerPCSChainingOperation:(id)arg1;
@property(readonly, nonatomic) _Bool hasDefaultAppLibrary;
@property(readonly, nonatomic) BRCAppLibrary *defaultAppLibrary; // @synthesize defaultAppLibrary=_defaultAppLibrary;
- (id)fetchZoneRootItemInDB:(id)arg1;
- (id)rootItemID;
@property(readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
- (id)asPrivateClientZone;
@property(readonly, nonatomic) _Bool isPrivateZone;
- (id)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg1;
- (_Bool)parentIDHasLiveUnchainedChildren:(id)arg1;
- (unsigned int)pcsChainStateForItem:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool isSharedZone; // @dynamic isSharedZone;

@end

