//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFLogEventSessionVoucher, NSString, NSUUID;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : NSObject <HMFLogging>
{
    unsigned long long _signpostId;
    NSUUID *_uuid;
    NSUUID *_rootUUID;
    id <HMFLogBackendSession> _backend;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMFLogBackendSession> backend; // @synthesize backend=_backend;
@property(readonly, nonatomic) NSUUID *rootUUID; // @synthesize rootUUID=_rootUUID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;
@property(readonly, nonatomic) NSString *serviceName;
- (void)dealloc;
@property(readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
- (id)initWithUUID:(id)arg1 rootUUID:(id)arg2 backend:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

