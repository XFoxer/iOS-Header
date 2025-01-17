//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallDirectoryManagerDefaultHostProtocol-Protocol.h>
#import <CallKit/CXCallDirectoryManagerMaintenanceHostProtocol-Protocol.h>

@class NSString;
@protocol CXCallDirectoryHostDelegate, OS_dispatch_queue;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)prepareStoreIfNecessary;
- (oneway void)launchCallDirectorySettingsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)compactStoreWithReply:(CDUnknownBlockType)arg1;
- (oneway void)synchronizeExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_nsExtensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

