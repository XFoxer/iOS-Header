//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SSVAppleAccountStore : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ACAccount *_primaryAppleAccount;
}

+ (id)sharedAccountStore;
- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
@property(readonly) ACAccount *primaryAppleAccount;
- (id)init;

@end

