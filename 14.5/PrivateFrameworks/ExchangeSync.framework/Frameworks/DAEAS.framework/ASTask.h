//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DAEAS/DATask-Protocol.h>
#import <DAEAS/NSURLSessionDataDelegate-Protocol.h>
#import <DAEAS/NSURLSessionDelegate-Protocol.h>
#import <DAEAS/NSURLSessionTaskDelegate-Protocol.h>

@class ASItem, ASParseContext, ASTaskManager, DATaskManager, NSDate, NSError, NSHTTPURLResponse, NSString, NSThread, NSTimer, NSURLRequest, NSURLSession, NSURLSessionDataTask;

@interface ASTask : NSObject <DATask, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _haveSwitchedCodePage;
    _Bool _haveParsedCommand;
    ASItem *_currentlyParsingItem;
    id _delegate;
    NSHTTPURLResponse *_response;
    ASParseContext *_parseContext;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSURLRequest *_request;
    _Bool _isFakingIt;
    _Bool _didSendRequest;
    _Bool _didFailWithError;
    _Bool _didCancel;
    _Bool _didReceiveResponse;
    _Bool _didReceiveData;
    _Bool _didFinishLoading;
    _Bool _didReset;
    _Bool _finished;
    _Bool _finishedByTimeoutEnforcer;
    int _interfaceBinding;
    id _context;
    _Bool _isExclusive;
    int _numBadPasswordResponses;
    _Bool _askedToCancelWhileModal;
    _Bool _haveCheckedForTopLevelError;
    _Bool _handledTopLevelError;
    int _taskID;
    ASTaskManager *_taskManager;
    int _modalReason;
    int _modalPushCount;
    NSString *_lastKnownPolicyKey;
    NSError *_passwordNotificationError;
    NSString *_lastKnownPassword;
    NSDate *_dateConnectionWentOut;
    NSTimer *_timeoutEnforcer;
    _Bool _retry;
    int _serverRequestedRetryCount;
    _Bool _isLoadedOnMainThread;
    long long _sentBytesCount;
    long long _receivedBytesCount;
    NSString *_sourceApplicationBundleIdentifier;
    DATaskManager *_strongTaskManagerDuringDelegateCallout;
    NSThread *_thread;
}

+ (void)_restoreDefaultTaskTimeout;
+ (void)_setDefaultTaskTimeout:(double)arg1 failureFallbackTimeout:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) _Bool isLoadedOnMainThread; // @synthesize isLoadedOnMainThread=_isLoadedOnMainThread;
@property(retain, nonatomic) DATaskManager *strongTaskManagerDuringDelegateCallout; // @synthesize strongTaskManagerDuringDelegateCallout=_strongTaskManagerDuringDelegateCallout;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) long long receivedBytesCount; // @synthesize receivedBytesCount=_receivedBytesCount;
@property(nonatomic) long long sentBytesCount; // @synthesize sentBytesCount=_sentBytesCount;
@property(readonly, nonatomic) ASParseContext *parseContext; // @synthesize parseContext=_parseContext;
@property(retain, nonatomic) NSTimer *timeoutEnforcer; // @synthesize timeoutEnforcer=_timeoutEnforcer;
@property(retain, nonatomic) NSString *lastKnownPassword; // @synthesize lastKnownPassword=_lastKnownPassword;
@property(nonatomic) _Bool askedToCancelWhileModal; // @synthesize askedToCancelWhileModal=_askedToCancelWhileModal;
@property(retain, nonatomic) ASItem *currentlyParsingItem; // @synthesize currentlyParsingItem=_currentlyParsingItem;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(nonatomic) int interfaceBinding; // @synthesize interfaceBinding=_interfaceBinding;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (void)_unitTestFinished;
- (id)onBehalfOfBundleIdentifier;
- (id)_requestForLogging;
- (id)_sessionForLogging;
- (void)reportStatusWithError:(id)arg1;
- (int)numDownloadedElements;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)shouldReportTimeInNetwork;
- (void)reset;
- (void)_initFakeParseContext;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (void)_handleCompletionError:(id)arg1;
- (void)_handleCompletion;
- (void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getCredential:(id)arg1;
- (_Bool)_canAuthenticateAgainstProtectionSpace:(id)arg1;
- (_Bool)_shouldUseUsernamePasswordForAuthenticationMethod:(id)arg1;
- (void)_URLSessionDataTaskDidReceiveData:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_URLSessionTaskDidCompleteWithError:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_URLSessionDidBecomeInvalidWithError:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (_Bool)shouldHandleServerErrorRetryLater;
- (_Bool)shouldHandlePasswordErrors;
- (_Bool)_handleRedirect:(id)arg1;
- (_Bool)_handleCertificateError:(id)arg1;
- (void)_handleCredentialRenewalResult:(id)arg1;
- (void)_handleBadPasswordResponse;
- (id)_applyAuthenticationChain:(id)arg1 toRequest:(id)arg2;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1 afterDelegateCallout:(CDUnknownBlockType)arg2;
- (void)finishWithError:(id)arg1;
- (_Bool)isInCallOutToDelegate;
- (void)didCallOutToDelegate;
- (void)willCallOutToDelegate;
- (_Bool)attemptRetryWithStatus:(long long)arg1 error:(id)arg2;
- (void)_continuePerformTask;
- (void)_setHTTPParametersOnRequest:(id)arg1 outBodyStream:(id *)arg2 outBodyData:(id *)arg3;
- (void)_addAuthToRequest:(id)arg1;
- (void)taskManagerDidFailToUpdatePolicyKey;
- (void)taskManagerDidUpdatePolicyKey;
- (void)taskManagerDidFindEASVersion;
- (void)startModal;
- (void)_popModal;
- (void)_pushModalForReason:(int)arg1;
- (void)performTask;
- (void)_failImmediately;
- (void)tearDownResourcesAndCancelTask;
- (void)tearDownResourcesButLeaveSessionAlone;
- (void)tearDownResources;
- (void)_tearDownResourcesHelper;
- (void)loadRequest:(id)arg1;
- (void)_assignConnectionProperties:(id)arg1 toSessionConfiguration:(id)arg2;
- (void)_timeoutEnforcerFired:(id)arg1;
- (_Bool)shouldHoldPowerAssertion;
- (_Bool)requiresEASVersionUpdate;
- (_Bool)requiresEASVersionInformaton;
- (_Bool)shouldLogIncomingData;
- (void)didProcessContext:(id)arg1;
- (void)willProcessContext;
- (id)contentType;
- (long long)taskStatusForError:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (double)percentComplete;
- (_Bool)checkForErrorInContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)requestBody;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;
- (id)parameterData;
- (int)commandCode;
- (id)command;
- (_Bool)_isWBXML;
- (id)_policyKey;
- (id)_easVersion;
- (id)_url;
- (double)timeoutInterval;
- (id)_HTTPMethodForRequest:(id)arg1;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (id)httpMethod;
- (int)taskID;
- (id)responseContentType;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

