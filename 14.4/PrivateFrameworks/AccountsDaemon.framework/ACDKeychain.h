//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDKeychain : NSObject
{
}

+ (void)_migrateKeychainItemIfNecessary:(id)arg1;
+ (void)_addKnownMigratedKeychainItem:(id)arg1;
+ (_Bool)_isKnownMigratedKeychainItem:(id)arg1;
+ (id)_knownMigratedKeychainItems;
+ (id)keychainDeletedAccounts;
+ (_Bool)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id *)arg5;
+ (_Bool)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (_Bool)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)_passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 checkInKeybag:(_Bool)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)cache;

@end

