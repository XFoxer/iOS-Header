//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSAuthenticateRequestDelegate-Protocol.h>

@class NSString, SSAccount, SSAuthenticateRequest;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate <SSAuthenticateRequestDelegate>
{
    SSAccount *_authenticatedAccount;
}

+ (id)instanceWithAuthenticationContext:(id)arg1;
- (void).cxx_destruct;
- (void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)storeLoginFailedError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) SSAuthenticateRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end

