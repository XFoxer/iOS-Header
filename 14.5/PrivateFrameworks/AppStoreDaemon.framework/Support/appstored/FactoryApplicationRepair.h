//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "ASDBagConsumer-Protocol.h"
#import "ApplicationRepair-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ApplicationProxy, NSArray, NSString, UnfairLock;
@protocol AMSBagProtocol, ApplicationRepairDelegate;

@interface FactoryApplicationRepair : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate, ApplicationRepair, ASDBagConsumer>
{
    ApplicationProxy *_application;
    id <AMSBagProtocol> _bag;
    UnfairLock *_lock;
    NSString *_logUUID;
    _Bool _establishesActiveAccount;
    _Bool _ignoresPreviousClaimAttempts;
    id <ApplicationRepairDelegate> _delegate;
    NSArray *_repairedBundleIDs;
}

+ (void)_setClaimBuildVersion:(id)arg1 forAccount:(id)arg2;
+ (id)_requestParametersWithAccount:(id)arg1 unclaimedApps:(id)arg2 logUUID:(id)arg3;
+ (id)_lastClaimBuildVersionWithAccount:(id)arg1;
+ (_Bool)_isFactoryInstallAppProxy:(id)arg1 logUUID:(id)arg2;
+ (id)_copyUnclaimedApplicationsWithLogUUID:(id)arg1;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_updateAppsUsingResponseDictionary:(id)arg1 account:(id)arg2;
- (id)_performClaimForAccount:(id)arg1 unclaimedApplications:(id)arg2 error:(id *)arg3;
- (id)_attemptAuthenticationWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;
- (void)setRepairedBundleIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(nonatomic) _Bool establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
- (id)initWithApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

