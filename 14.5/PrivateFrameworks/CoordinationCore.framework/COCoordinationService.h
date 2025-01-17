//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoordinationCore/COStateManagerServiceInterface-Protocol.h>
#import <CoordinationCore/NSXPCListenerDelegate-Protocol.h>

@class COMeshAlarmAddOn, COMeshController, COMeshHomeKitAddOn, COMeshTimerAddOn, NSArray, NSDictionary, NSString, NSXPCListener;
@protocol COCoordinationServiceListenerProvider;

@interface COCoordinationService : NSObject <NSXPCListenerDelegate, COStateManagerServiceInterface>
{
    struct os_unfair_lock_s _lock;
    COMeshController *_homeMesh;
    COMeshController *_zoneMesh;
    COMeshController *_roomMesh;
    COMeshController *_pairMesh;
    COMeshHomeKitAddOn *_homeKitSupport;
    COMeshAlarmAddOn *_alarmSupport;
    COMeshTimerAddOn *_timerSupport;
    NSXPCListener *_listener;
    id <COCoordinationServiceListenerProvider> _provider;
    NSArray *_clients;
    COMeshController *_localMesh;
    NSDictionary *_meshes;
    NSArray *_observers;
}

+ (void)startWithConstituentType:(unsigned long long)arg1;
+ (void)setSingleton:(id)arg1;
+ (id)singleton;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *meshes; // @synthesize meshes=_meshes;
@property(readonly, nonatomic) COMeshController *localMesh; // @synthesize localMesh=_localMesh;
@property(copy, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(readonly, nonatomic) id <COCoordinationServiceListenerProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) COMeshTimerAddOn *timerSupport; // @synthesize timerSupport=_timerSupport;
@property(readonly, nonatomic) COMeshAlarmAddOn *alarmSupport; // @synthesize alarmSupport=_alarmSupport;
@property(readonly, nonatomic) COMeshHomeKitAddOn *homeKitSupport; // @synthesize homeKitSupport=_homeKitSupport;
- (void)_significantHomeChange:(id)arg1;
- (id)_controllerForHomeKitEntity_unsafe:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)requestCompositionForCluster:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)unregisterForMediaSystemLeaderChange;
- (void)registerForMediaSystemLeaderChange;
- (void)isMediaSystemLeader:(CDUnknownBlockType)arg1;
- (_Bool)isMediaSystemLeader;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)didStopMeshController:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)_initializeAddOns;
@property(retain, nonatomic) COMeshController *pairMesh; // @synthesize pairMesh=_pairMesh;
@property(retain, nonatomic) COMeshController *roomMesh; // @synthesize roomMesh=_roomMesh;
@property(retain, nonatomic) COMeshController *zoneMesh; // @synthesize zoneMesh=_zoneMesh;
@property(retain, nonatomic) COMeshController *homeMesh; // @synthesize homeMesh=_homeMesh;
- (void)dealloc;
- (id)_initWithConstituentType:(unsigned long long)arg1;
- (id)_initWithConstituentType:(unsigned long long)arg1 listenerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

