//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballServiceProxyDelegate-Protocol.h>
#import <Navigation/MNTimeballServiceProxyInterface-Protocol.h>

@class MNTimeballSubscriberStore, NSString, NSXPCConnection;
@protocol MNTimeballServiceProxyDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate>
{
    NSXPCConnection *_connection;
    MNTimeballSubscriberStore *_subscriberStore;
    _Bool _requestLeeching;
    id <MNTimeballServiceProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;
- (void)didReceiveError:(id)arg1 forDestination:(id)arg2;
- (void)completedUpdateForHandlerID:(id)arg1;
- (void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)unsubscribeFromAllDestinations;
- (void)subscribeToAllDestinations;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
- (id)_remoteObjectProxy;
- (void)_closeConnection;
- (void)_openConnection;
- (void)_registerForNavdRestart;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

