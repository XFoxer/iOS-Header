//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDManagedAppService : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;
- (void).cxx_destruct;
- (void)submitVPPRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)submitManifestRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2;
- (void)requestStatusWithResultHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

