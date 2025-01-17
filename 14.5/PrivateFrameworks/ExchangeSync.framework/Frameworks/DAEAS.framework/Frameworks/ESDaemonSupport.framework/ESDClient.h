//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessExpress/DADisableableObject.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_xpc_object;

@interface ESDClient : DADisableableObject
{
    _Bool _persistent;
    int _numOutstandingBlockingClientCalls;
    int _numOutstandingRefreshPriorityClientCalls;
    NSString *_clientBundleID;
    NSString *_clientUniqueID;
    NSObject<OS_xpc_object> *_conn;
    NSMutableDictionary *_watchedIDs;
    NSMutableDictionary *_busyIDs;
    NSMutableDictionary *_updatedIDs;
    NSMutableDictionary *_accountTimers;
    NSMutableDictionary *_actionDelegatesById;
    NSString *_clientName;
    NSMutableDictionary *_agentMonitoringTokens;
}

+ (id)clientsToInterrogate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *agentMonitoringTokens; // @synthesize agentMonitoringTokens=_agentMonitoringTokens;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSMutableDictionary *actionDelegatesById; // @synthesize actionDelegatesById=_actionDelegatesById;
@property(retain, nonatomic) NSMutableDictionary *accountTimers; // @synthesize accountTimers=_accountTimers;
@property(nonatomic) int numOutstandingRefreshPriorityClientCalls; // @synthesize numOutstandingRefreshPriorityClientCalls=_numOutstandingRefreshPriorityClientCalls;
@property(nonatomic) int numOutstandingBlockingClientCalls; // @synthesize numOutstandingBlockingClientCalls=_numOutstandingBlockingClientCalls;
@property(retain, nonatomic) NSMutableDictionary *updatedIDs; // @synthesize updatedIDs=_updatedIDs;
@property(retain, nonatomic) NSMutableDictionary *busyIDs; // @synthesize busyIDs=_busyIDs;
@property(retain, nonatomic) NSMutableDictionary *watchedIDs; // @synthesize watchedIDs=_watchedIDs;
@property(retain, nonatomic) NSObject<OS_xpc_object> *conn; // @synthesize conn=_conn;
@property(retain, nonatomic) NSString *clientUniqueID; // @synthesize clientUniqueID=_clientUniqueID;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly, nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
- (id)rawConnection;
- (void)_dispatchMessage:(id)arg1;
- (void)_clientDiedWithReason:(id)arg1;
- (void)applyClientStatusReportToAggregator:(id)arg1;
- (void)_agentsStopped:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_requestClientStatusDump:(id)arg1;
- (void)_asPolicyKeyChanged:(id)arg1;
- (void)_getAccountExternalIdentification:(id)arg1 eventDict:(id)arg2;
- (void)_cancelCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2;
- (void)_performCalendarDirectorySearch:(id)arg1 eventDict:(id)arg2;
- (void)_cancelCalendarAvailabilityRequest:(id)arg1 eventDict:(id)arg2;
- (void)_requestCalendarAvailability:(id)arg1 eventDict:(id)arg2;
- (void)_checkIsOofSettingsSupported:(id)arg1;
- (void)_openServerOofSettingsRequest:(id)arg1;
- (void)_getActiveSyncDeviceIdentifier:(id)arg1;
- (void)_fillOutEASTimeZoneInfo:(id)arg1;
- (void)_reportSharedCalendarAsJunkEvent:(id)arg1 eventDict:(id)arg2;
- (void)_respondToSharedCalendarEvent:(id)arg1 eventDict:(id)arg2;
- (void)_cancelDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2;
- (void)_beginDownloadingAttachmentEvent:(id)arg1 eventDict:(id)arg2;
- (void)_resetThrottleTimers:(id)arg1;
- (void)_registerForInterrogation:(id)arg1;
- (void)_getStatusReports:(id)arg1;
- (void)_processFolderChange:(id)arg1;
- (void)_handleURL:(id)arg1;
- (void)_reportFolderItemsSyncResult:(id)arg1;
- (void)_setFolderIdsThatExternalClientsCareAbout:(id)arg1;
- (void)_resetCertWarnings:(id)arg1;
- (void)_asyncProcessMeetingRequests:(id)arg1;
- (void)_processMeetingRequests:(id)arg1;
- (void)_cancelServerContactsSearch:(id)arg1;
- (void)_openServerContactsSearch:(id)arg1;
- (void)delegateWithIDIsGoingAway:(id)arg1;
- (void)_requestFolderListUpdate:(id)arg1;
- (void)_requestFolderListUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;
- (void)_requestAllFolderContentsUpdate:(id)arg1;
- (void)_requestAllFolderContentsUpdateForAccountId:(id)arg1 dataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)_requestFolderContentsUpdate:(id)arg1;
- (void)_requestFolderContentsUpdateForFolders:(id)arg1 accountId:(id)arg2 dataclasses:(long long)arg3 isUserRequested:(_Bool)arg4;
- (id)timersForAccountWithID:(id)arg1;
- (void)_requestPolicyUpdate:(id)arg1;
- (void)_getCurrentPolicyKey:(id)arg1;
- (void)_removeStoresForAccountWithID:(id)arg1;
- (void)_stopMonitoringAgents:(id)arg1;
- (void)_startMonitoringAgents:(id)arg1;
- (void)_clearAllStopMonitoringAgentsTokens;
- (void)_startMonitoringAgentsWithServerToken:(unsigned long long)arg1;
- (void)_startMonitoringAgentsWithClientToken:(unsigned long long)arg1;
- (void)_stopMonitoringAgentsWithClientToken:(unsigned long long)arg1;
- (void)_suspendMonitoringFolders:(id)arg1;
- (void)_resumeMonitoringFolders:(id)arg1;
- (void)_stopMonitoringFolders:(id)arg1;
- (void)beginMonitoringPersistentFolders:(id)arg1 forAccount:(id)arg2;
- (void)_beginMonitoringFolders:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)unregisterForInterrogation;
- (void)registerForInterrogation;
- (void)noteRefreshClientCallChange:(int)arg1;
- (void)noteBlockedClientCallChange:(int)arg1;
- (_Bool)isMonitoringAccountID:(id)arg1 folderID:(id)arg2;
- (void)persistentClientCleanup;
- (unsigned long long)watchedFolderCount;
- (void)disable;
- (void)_removeWatchedFolderIDs:(id)arg1 forAccountWithID:(id)arg2;
- (void)_removeBusyFolderIDs:(id)arg1 forAccountWithID:(id)arg2;
- (id)_clientName;
- (void)dealloc;
- (void)reconnectWithConnection:(id)arg1;
- (id)initWithClientID:(id)arg1;
- (id)initWithConnection:(id)arg1 clientID:(id)arg2;

@end

