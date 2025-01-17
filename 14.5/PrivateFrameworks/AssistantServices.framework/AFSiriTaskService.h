//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class AFSiriTaskDeliveryHandler, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    AFSiriTaskDeliveryHandler *_deliveryHandler;
}

+ (id)appTaskService;
+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)resume;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

