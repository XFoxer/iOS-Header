//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/DAAccountChangeHandlerAccountStoreUpdater-Protocol.h>

@class ACAccountStore, NSString;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater>
{
    ACAccountStore *_store;
}

- (void).cxx_destruct;
- (void)removeAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAccountStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

