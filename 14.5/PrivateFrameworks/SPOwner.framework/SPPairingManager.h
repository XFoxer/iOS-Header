//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession;
@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPPairingManagerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPPairingManagerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
- (void)allPairingErrorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)unpairUUID:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finalizePairingWithSession:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finalizePairingWithSession:(id)arg1 name:(id)arg2 roleId:(long long)arg3 roleEmoji:(id)arg4 keyStatus:(id)arg5 collaborativeKey:(id)arg6 signature:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)verifyPairingWithPairingSession:(id)arg1 signature:(id)arg2 attestation:(id)arg3 systemPublicKey:(id)arg4 refKeyPublicKey:(id)arg5 systemVersion:(id)arg6 vendorId:(long long)arg7 productId:(long long)arg8 ecid:(id)arg9 chipId:(id)arg10 serialNumber:(id)arg11 collaborativeKey:(id)arg12 completion:(CDUnknownBlockType)arg13;
- (void)invalidatePairingSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initiatePairingSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteInterface;
- (id)userAgentProxy;
- (void)dealloc;
- (id)init;

@end

