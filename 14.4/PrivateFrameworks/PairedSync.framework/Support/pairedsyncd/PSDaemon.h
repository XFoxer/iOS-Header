//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "PSDSyncInitiatorDelegate-Protocol.h"

@class NSArray, NSString, NSXPCListener, PSDSwitchAssertionManager, PSDSyncRestrictionNotifier, PSDWatchSyncStateObserver;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PSDaemon : NSObject <NSXPCListenerDelegate, PSDSyncInitiatorDelegate>
{
    NSXPCListener *_toolListener;
    NSXPCListener *_progressListener;
    NSXPCListener *_clientListener;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSArray *_loggers;
    PSDWatchSyncStateObserver *_watchSyncStateObserver;
    PSDSyncRestrictionNotifier *_syncRestrictionNotifier;
    PSDSwitchAssertionManager *_switchAssertionManager;
    NSObject<OS_os_transaction> *_syncingStayAliveTransaction;
    _Bool _shouldNotDieSuddenly;
    _Bool _exitPending;
    _Bool _shouldRelaunch;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)syncInitiatorStateChangedTo:(unsigned long long)arg1;
- (void)addLoggersIfNeeded;
- (_Bool)shouldAcceptNewClientConnection:(id)arg1;
- (_Bool)shouldAcceptNewProgressConnection:(id)arg1;
- (_Bool)shouldAcceptNewToolConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_registerForNotifications;
- (void)sigTermHandler;
@property(nonatomic) _Bool shouldRelaunch; // @synthesize shouldRelaunch=_shouldRelaunch;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

