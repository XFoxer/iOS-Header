//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, UMUser, UMUserSwitchContext;
@protocol UMUserSwitchStakeholder, UMUserSyncStakeholder;

@protocol UMUserSwitchManagement <NSObject>
- (void)resumeSync;
- (void)terminateSyncWithCompletionHandler:(void (^)(void))arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(NSString *)arg3;
- (void)registerUserSyncStakeholder:(id <UMUserSyncStakeholder>)arg1 withMachServiceName:(NSString *)arg2;
- (void)registerUserSwitchStakeHolder:(id <UMUserSwitchStakeholder>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerUserSwitchStakeHolder:(id <UMUserSwitchStakeholder>)arg1;
- (void)loginUICheckInWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)directSwitchToUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 context:(UMUserSwitchContext *)arg3 preferences:(NSDictionary *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)switchToUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 context:(UMUserSwitchContext *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)logoutToLoginSessionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)switchToLoginUserWithError:(NSError *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)switchToLoginUserWithCompletionHandler:(void (^)(NSError *))arg1;
@end

