//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2AccessoryServerCoordinator-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerCoordinatorPrivate-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerDiscoveryDelegate-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, NSMutableDictionary, NSOperationQueue, NSString;
@protocol HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerFactory, HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDiscovery, HAP2AccessoryServerEncodingFactory, HAP2AccessoryServerPairingFactory, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransportFactory;

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject <HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator>
{
    _Bool _discovering;
    _Bool _startDiscoveringPending;
    _Bool _stopDiscoveringPending;
    id <HAP2AccessoryServerCoordinatorDelegate> _delegate;
    NSMutableDictionary *_discoveredAccessoryServers;
    id <HAP2AccessoryServerBrowserPrivate> _browser;
    id <HAP2AccessoryServerDiscovery> _discovery;
    id <HAP2AccessoryServerPairingFactory> _pairingFactory;
    id <HAP2AccessoryServerTransportFactory> _transportFactory;
    id <HAP2AccessoryServerSecureTransportFactory> _secureTransportFactory;
    id <HAP2AccessoryServerEncodingFactory> _encodingFactory;
    id <HAP2AccessoryServerControllerFactory> _controllerFactory;
    HAP2SerializedOperationQueue *_operationQueue;
    NSOperationQueue *_localOperationQueue;
    HAP2PropertyLock *_propertyLock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HAP2PropertyLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) NSOperationQueue *localOperationQueue; // @synthesize localOperationQueue=_localOperationQueue;
@property(readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <HAP2AccessoryServerControllerFactory> controllerFactory; // @synthesize controllerFactory=_controllerFactory;
@property(readonly, nonatomic) id <HAP2AccessoryServerEncodingFactory> encodingFactory; // @synthesize encodingFactory=_encodingFactory;
@property(readonly, nonatomic) id <HAP2AccessoryServerSecureTransportFactory> secureTransportFactory; // @synthesize secureTransportFactory=_secureTransportFactory;
@property(readonly, nonatomic) id <HAP2AccessoryServerTransportFactory> transportFactory; // @synthesize transportFactory=_transportFactory;
@property(readonly, nonatomic) id <HAP2AccessoryServerPairingFactory> pairingFactory; // @synthesize pairingFactory=_pairingFactory;
@property(readonly, nonatomic) id <HAP2AccessoryServerDiscovery> discovery; // @synthesize discovery=_discovery;
@property(readonly, nonatomic) __weak id <HAP2AccessoryServerBrowserPrivate> browser; // @synthesize browser=_browser;
- (id)_createPairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3;
- (id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3;
- (id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)arg1;
- (void)_didDiscoverPairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didDiscoverUnpairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didLoseAccessory:(id)arg1 error:(id)arg2;
- (void)_didDeterminePairingStateForAccessory:(id)arg1 isPaired:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didDiscoverAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didStopDiscoveringWithError:(id)arg1;
- (void)_didStartDiscoveringWithError:(id)arg1;
- (void)_stopDiscovering;
- (void)_startDiscovering;
- (void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;
- (void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2;
- (void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)resurfaceDiscoveryInfoForDeviceID:(id)arg1;
- (void)stopDiscovering;
- (void)startDiscovering;
@property(readonly, nonatomic) NSMutableDictionary *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
@property(nonatomic, getter=isStopDiscoveringPending) _Bool stopDiscoveringPending; // @synthesize stopDiscoveringPending=_stopDiscoveringPending;
@property(nonatomic, getter=isStartDiscoveringPending) _Bool startDiscoveringPending; // @synthesize startDiscoveringPending=_startDiscoveringPending;
@property(nonatomic, getter=isDiscovering) _Bool discovering; // @synthesize discovering=_discovering;
@property(nonatomic) __weak id <HAP2AccessoryServerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBrowser:(id)arg1 operationQueue:(id)arg2;
- (id)initWithDiscovery:(id)arg1 pairingFactory:(id)arg2 transportFactory:(id)arg3 secureTransportFactory:(id)arg4 encodingFactory:(id)arg5 controllerFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

