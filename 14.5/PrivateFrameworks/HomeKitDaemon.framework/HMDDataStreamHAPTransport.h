//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamTransport-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCharacteristic, HMDDataStreamFrameReader, HMDHAPAccessory, NSMutableArray, NSNumber, NSString;
@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;

@interface HMDDataStreamHAPTransport : NSObject <HMFLogging, HMDDataStreamTransport>
{
    _Bool _isWriteInProgress;
    _Bool _lastAccessoryRequestToSendFlag;
    id <HMDDataStreamTransportDelegate> delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    HMDCharacteristic *_transportCharacteristic;
    HMDCharacteristic *_interruptCharacteristic;
    NSNumber *_sessionIdentifier;
    unsigned long long _maxControllerTransportMTU;
    HMDDataStreamFrameReader *_byteReader;
    NSString *_logIdentifier;
    NSString *_notificationClientIdentifier;
    NSMutableArray *_pendingWrites;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property _Bool lastAccessoryRequestToSendFlag; // @synthesize lastAccessoryRequestToSendFlag=_lastAccessoryRequestToSendFlag;
@property _Bool isWriteInProgress; // @synthesize isWriteInProgress=_isWriteInProgress;
@property(readonly) NSMutableArray *pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property(readonly) NSString *notificationClientIdentifier; // @synthesize notificationClientIdentifier=_notificationClientIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(readonly) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(readonly) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) HMDCharacteristic *interruptCharacteristic; // @synthesize interruptCharacteristic=_interruptCharacteristic;
@property(retain) HMDCharacteristic *transportCharacteristic; // @synthesize transportCharacteristic=_transportCharacteristic;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)_handleInterruptCharacteristicValue:(id)arg1;
- (void)_handleCharacteristicsValueUpdated:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_cancelAllPendingWritesWithError:(id)arg1;
- (void)_removeAndMarkCompleteAllCompletedWrites;
- (void)_stopTransportForWriteFailureError:(id)arg1;
- (void)_handleCompletionWithResponseTuples:(id)arg1;
- (void)_doNextWriteOperation;
- (id)_buildWriteRequestWithError:(id *)arg1 shouldForceClose:(_Bool)arg2;
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;
- (void)_notifyDelegateDidFailWithError:(id)arg1;
- (void)_notifyDelegateDidClose;
- (void)_notifyDelegateDidOpen;
- (void)_deregisterForMessages;
- (void)_registerForMessages;
- (void)_teardownSessionWithError:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)close;
- (void)connect;
- (_Bool)_isRunning;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

