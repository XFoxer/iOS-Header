//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SFCredentialStore;
@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject
{
    _SFCredentialStore *_credentialStore;
    NSObject<OS_dispatch_queue> *_keychainManagerQueue;
    NSObject<OS_dispatch_queue> *_keychainReplyQueue;
}

+ (id)defaultOverCommitManager;
+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *keychainReplyQueue; // @synthesize keychainReplyQueue=_keychainReplyQueue;
@property(retain) NSObject<OS_dispatch_queue> *keychainManagerQueue; // @synthesize keychainManagerQueue=_keychainManagerQueue;
@property(retain) _SFCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
- (void)removeItemWithIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)identitiesFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)keysFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)dataForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)identityForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (struct __CFDictionary *)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2;
- (struct __CFDictionary *)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)initOverCommitManager;
- (id)initManager;

@end

