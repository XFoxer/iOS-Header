//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, DownloadAgentSupervisor, InGameAnalyticsListener, JobAgentSupervisor, JobManagerListener, JobScheduler, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, OctaneListener, RequestBroker, RequestListener, SoftwareUpdateListener, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    InGameAnalyticsListener *_inGameAnalyticsDelegate;
    NSXPCListener *_inGameAnalyticsListener;
    NSObject<OS_dispatch_source> *_jetsamSource;
    JobManagerListener *_jobManagerDelegate;
    NSXPCListener *_jobManagerListener;
    LaunchServicesObserver *_launchServicesObserver;
    OctaneListener *_octaneDelegate;
    NSXPCListener *_octaneListener;
    ODRAppReviewListener *_odrAppReviewDelegate;
    NSXPCListener *_odrAppReviewListener;
    ODRDiagnosticsListener *_odrCtlDelegate;
    NSXPCListener *_odrCtlListener;
    ODRDevtoolsListener *_odrDevtoolsDelegate;
    NSXPCListener *_odrDevtoolsListener;
    ODRServiceDelegate *_odrFoundationDelegate;
    NSXPCListener *_odrFoundationListener;
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;
    NSXPCListener *_odrLaunchServicesListener;
    NSXPCListener *_personalizationStoreService;
    RequestBroker *_requestBroker;
    RequestListener *_requestDelegate;
    NSXPCListener *_requestListener;
    NSObject<OS_dispatch_source> *_signalSource;
    NSXPCListener *_softwareUpdateListener;
    SoftwareUpdateListener *_softwareUpdateDelegate;
    NSXPCListener *_storeQueueListener;
    StoreQueueListener *_storeQueueDelegate;
    NSCountedSet *_transactionCount;
    NSMutableDictionary *_transactionStore;
    XPCServiceBroker *_serviceBroker;
    DownloadAgentSupervisor *_downloadSupervisor;
    JobAgentSupervisor *_jobSupervisor;
    JobScheduler *_jobScheduler;
    AppMetricsMonitor *_appMetricsMonitor;
}

+ (void)_performODRSoftwareUpdateHousekeeping:(_Bool)arg1;
+ (_Bool)isPasscodeDisabled;
+ (_Bool)isDeviceUnlocked;
+ (id)daemon;
- (void).cxx_destruct;
@property(readonly, nonatomic) JobAgentSupervisor *jobSupervisor; // @synthesize jobSupervisor=_jobSupervisor;
@property(readonly, nonatomic) JobScheduler *jobScheduler; // @synthesize jobScheduler=_jobScheduler;
@property(readonly, nonatomic) DownloadAgentSupervisor *downloadSupervisor; // @synthesize downloadSupervisor=_downloadSupervisor;
@property(readonly, nonatomic) AppMetricsMonitor *appMetricsMonitor; // @synthesize appMetricsMonitor=_appMetricsMonitor;
- (void)_setAMSProperties;
- (void)_startODRXPCListeners;
- (void)_setupODRXPCMaintenanceTask;
- (void)_setupODRDataMigrationTask;
- (void)_setupCacheDeleteCoordinator;
- (void)_handleMigrationDidFinishNotification:(id)arg1;
- (void)_updateDAAPDatabasesIfNeeded;
- (void)_startXPCModernListeners;
- (void)_startXPCListeners;
- (void)_startMidChangedNotifier;
- (void)_startAppInstallQueue;
- (void)_setupSignalHandler;
- (void)_startODR;
- (void)_startLaunchServicesObserver;
- (void)_setupLogging;
- (id)_createListenerForMachServiceName:(id)arg1 withDelegate:(id)arg2;
- (void)takeKeepAliveTransaction:(id)arg1;
- (void)releaseKeepAliveTransaction:(id)arg1;
- (void)performKeepAliveTransaction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)start;
- (_Bool)isMultiUser;
- (void)endShowingDialog;
- (void)beginShowingDialog;
- (void)dealloc;
- (id)init;

@end

