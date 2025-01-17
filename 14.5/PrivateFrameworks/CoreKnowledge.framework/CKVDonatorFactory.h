//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDonatorProvider-Protocol.h>

@protocol CKVDonateAuthorization, CKVDonateServiceProvider, OS_dispatch_queue;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider>
{
    NSObject<OS_dispatch_queue> *_donatorQueue;
    NSObject<CKVDonateServiceProvider> *_serviceProvider;
    NSObject<CKVDonateAuthorization> *_authorization;
}

+ (id)sharedDonatorFactory;
- (void).cxx_destruct;
- (id)makeDonatorForOriginApp:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2 authorization:(id)arg3;

@end

