//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject
{
    struct os_unfair_lock_s _accessorLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)requestApplicationLaunchForIncomingCall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestDidArriveFromExtensionPoint;
- (_Bool)taskHasEntitlement:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

