//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FTRegUtilities : NSObject
{
}

+ (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
+ (void)changePasswordControllerDidCancel:(id)arg1;
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
+ (id)serviceWithType:(long long)arg1;

@end

