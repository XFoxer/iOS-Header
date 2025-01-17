//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class HMFObjectObserver, NSArray, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject>
{
    unsigned long long _hash;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMFMessageReceiver> _receiver;
    NSString *_name;
    NSUUID *_target;
    NSArray *_policies;
    HMFObjectObserver *_observer;
}

+ (id)logCategory;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly) HMFObjectObserver *observer; // @synthesize observer=_observer;
@property(readonly, copy) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy) NSUUID *target; // @synthesize target=_target;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
- (id)logIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3;
- (_Bool)invokeWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

