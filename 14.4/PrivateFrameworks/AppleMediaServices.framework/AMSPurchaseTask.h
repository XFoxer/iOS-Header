//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSAuthenticateTaskDelegate-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>

@class AMSPurchaseInfo, AMSURLSession, NSString;
@protocol AMSBagProtocol, AMSPurchaseDelegate;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>
{
    id <AMSBagProtocol> _bag;
    AMSPurchaseInfo *_purchaseInfo;
    AMSURLSession *_session;
}

+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldPreauthenticatePurchase:(id)arg1;
- (id)_runDialogRequest:(id)arg1;
- (id)_runAuthenticateRequest:(id)arg1;
- (id)_recordEngagementEventWithInfo:(id)arg1 result:(id)arg2 error:(id)arg3;
- (id)_promptForAccount;
- (id)_performPurchaseWithError:(id *)arg1;
- (id)_performPreauthenticate;
- (void)_generateFraudScoreWithInfo:(id)arg1;
- (id)performPurchase;
@property(nonatomic) __weak id <AMSPurchaseDelegate> delegate;
- (id)initWithPurchase:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

