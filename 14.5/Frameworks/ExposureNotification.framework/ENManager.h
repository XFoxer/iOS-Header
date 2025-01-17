//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENExposureDetectionClientSession, NSMutableArray;
@protocol ENUIRemotePresentationController, OS_dispatch_queue, OS_xpc_object;

@interface ENManager : NSObject
{
    _Bool _activateCalled;
    ENExposureDetectionClientSession *_detectionSession;
    NSMutableArray *_exposureWindows;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
    _Bool _isTestEntitlement;
    id <ENUIRemotePresentationController> _remotePresentationController;
    _Bool _exposureNotificationEnabled;
    _Bool _exposureNotificationPaused;
    _Bool _analyticsEnabled;
    unsigned int _clientID;
    CDUnknownBlockType _activityHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _exposureNotificationStatus;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _diagnosisKeysAvailableHandler;
    NSObject<OS_xpc_object> *_testListenerEndpoint;
    CDUnknownBlockType _statusChangedHandler;
}

+ (long long)authorizationStatus;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(readonly, nonatomic) _Bool exposureNotificationPaused; // @synthesize exposureNotificationPaused=_exposureNotificationPaused;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) CDUnknownBlockType diagnosisKeysAvailableHandler; // @synthesize diagnosisKeysAvailableHandler=_diagnosisKeysAvailableHandler;
@property(readonly, nonatomic) _Bool exposureNotificationEnabled; // @synthesize exposureNotificationEnabled=_exposureNotificationEnabled;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) long long exposureNotificationStatus; // @synthesize exposureNotificationStatus=_exposureNotificationStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType activityHandler; // @synthesize activityHandler=_activityHandler;
- (void)verifyTextMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showBuddyForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubdivisionsForCountry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfigurationsForRegion:(id)arg1 fetchReason:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchConfigurationsForRegion:(id)arg1 forceServerFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remotePresentationRequestDidComplete:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearDeveloperServerConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setWeeklySummaryAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeveloperServerConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setActiveRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActiveEntityWithRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActiveEntityWithAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCurrentActiveApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAvailabilityAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAutomaticRegionSwitchEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getLastExposureNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)onboardingDidStartForRegion:(id)arg1 withSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllEntitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getInfoForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDataVaultSizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)exposureNotificationGetStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAndDetectExposure:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteExposureDetectionHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setRegionUserConsent:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRegionConsent:(long long)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRegionConsent:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)regionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRegionVisitHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)allAgencyConfigurationsForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)agencyConfigurationForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)regionServerConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)allRegionServerConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)allRegionConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)regionConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)activeRegionWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishTestVerificationForSession:(id)arg1 userDidConsent:(_Bool)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTestMetadataForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startTestVerificationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendChaffTestVerificationRequestForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getDetectionHistorySessionsCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDetectionHistorySessionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getDetectionHistoryFilesCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDetectionHistoryFilesForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_populateDetectionHistoryChecks:(id)arg1 forSessions:(id)arg2 sessionIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getDetectionHistoryChecksWithCompletion:(CDUnknownBlockType)arg1;
- (void)exposureDetectionFileFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)exposureDetectionFileAdd:(id)arg1 signatureURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)exposureDetectionFileActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exposureDetectionGetExposureInfoCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exposureDetectionGetExposureInfoWithMaximumCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exposureDetectionFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)exposureDetectionAddKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exposureDetectionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerNotificationOfType:(int)arg1 appBundleIdentifier:(id)arg2 classificationName:(id)arg3 interval:(id)arg4 region:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetDataWithFlags:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getDiagnosisKeysReply:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDiagnosisKeysForTesting:(_Bool)arg1 forceRefresh:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getTestDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestPreAuthorizedDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleRemotePresentationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didEnterLegalConsentPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkRemoteDialogueRequirementForRequestType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_preAuthorizeDiagnosisKeysWithSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preAuthorizeDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getExposureWindowsCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getExposureWindowsFromIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getExposureWindowsFromSummary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getExposureInfoCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getExposureInfoFromSummary:(id)arg1 userExplanation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)detectExposuresWithConfiguration:(id)arg1 diagnosisKeyURLs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)detectExposuresWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTravelStatusEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTravelStatusEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTravelStatusEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTravelStatusEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getRegionMonitorEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setRegionHistoryEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getRegionHistoryEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPreAuthorizeDiagnosisKeysEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pauseWithExpiration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPaused:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setExposureNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_xpcHandleStatusChanged:(id)arg1 initial:(_Bool)arg2;
- (void)_xpcHandlePreAuthorizedDiagnosisKeysAvailable:(id)arg1;
- (void)_xpcHandleActivity:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)_tccCheckWithCompletion:(CDUnknownBlockType)arg1;
- (void)getUserTraveledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_entitlementCheckUpdate:(id)arg1;
- (void)_entitlementCheckWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (id)_ensureXPCStarted;
- (void)_reactivate;
- (_Bool)_setActivationPropertiesOnRequest:(id)arg1 error:(id *)arg2;
- (void)_activateInitial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)activateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

