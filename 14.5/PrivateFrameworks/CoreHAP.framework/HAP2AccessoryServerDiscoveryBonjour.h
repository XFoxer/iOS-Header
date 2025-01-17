//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2AccessoryServerDiscovery-Protocol.h>

@class HAP2PropertyLock, NSMutableArray, NSObject, NSString;
@protocol HAP2AccessoryServerDiscoveryDelegate, OS_dispatch_queue, OS_nw_browser;

@interface HAP2AccessoryServerDiscoveryBonjour : HAP2LoggingObject <HAP2AccessoryServerDiscovery>
{
    _Bool _discovering;
    id <HAP2AccessoryServerDiscoveryDelegate> _delegate;
    NSObject<OS_nw_browser> *_browser;
    NSString *_type;
    NSString *_domain;
    NSObject<OS_dispatch_queue> *_workQueue;
    HAP2PropertyLock *_propertyLock;
    NSMutableArray *_browseResults;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *browseResults; // @synthesize browseResults=_browseResults;
@property(readonly, nonatomic) HAP2PropertyLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)_handleBrowseResults:(id)arg1;
- (void)_handleBrowseResultsChange:(id)arg1 curent:(id)arg2 batchComplete:(_Bool)arg3;
- (void)_handleStateChange:(int)arg1 error:(id)arg2;
- (void)_stopBrowser;
- (void)_startBrowser;
- (void)_stopDiscovering;
- (void)_startDiscovering;
- (void)reconfirmAccessory:(id)arg1;
- (void)stopDiscovering;
- (void)startDiscovering;
@property(retain, nonatomic) NSObject<OS_nw_browser> *browser; // @synthesize browser=_browser;
@property(nonatomic, getter=isDiscovering) _Bool discovering; // @synthesize discovering=_discovering;
@property(nonatomic) __weak id <HAP2AccessoryServerDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithLocalDomainAndServiceType:(id)arg1;
- (id)initWithServiceType:(id)arg1 domain:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

