//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKFieldDetectorObserver-Protocol.h>

@class NSDictionary, NSDistributedNotificationCenter, NSSet, NSString, PKExpressPassInformation, PKFieldDetector, PKPass, PKPassLibrary, PKPaymentService;
@protocol NPKExpressPassControllerDelegate, OS_dispatch_queue;

@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _expressPassChangedNotifyToken;
    unsigned long long _transactionStatus;
    PKPass *_currentTransactionPass;
    NSSet *_expressPassesInformation;
    PKPaymentService *_queue_paymentService;
    PKPassLibrary *_passLibrary;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
    id <NPKExpressPassControllerDelegate> _delegate;
    NSDictionary *_expressPasses;
    PKExpressPassInformation *_currentTransactionExpressPassInformation;
    PKFieldDetector *_fieldDetector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation; // @synthesize currentTransactionExpressPassInformation=_currentTransactionExpressPassInformation;
@property(retain) NSDictionary *expressPasses; // @synthesize expressPasses=_expressPasses;
@property(retain) NSSet *expressPassesInformation; // @synthesize expressPassesInformation=_expressPassesInformation;
@property(retain, nonatomic) PKPass *currentTransactionPass; // @synthesize currentTransactionPass=_currentTransactionPass;
@property __weak id <NPKExpressPassControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)_stopFieldDetector;
- (void)_startFieldDetector;
- (void)_parseExpressNotificationObject:(id)arg1 outApplicationIdentifier:(id *)arg2 outApplicationKeyIdentifier:(id *)arg3;
- (id)_expressPassInformationWithTechnologyType:(long long)arg1;
- (id)_expressPassesInformationWithTCIs:(id)arg1;
- (id)_queue_siblingExpressPassesForExpressPass:(id)arg1 applicationIdentifier:(id)arg2;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (void)_queue_updateExpressPasses;
- (void)updateExpressPasses;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1 transactionApplicationKeyIdentifier:(id)arg2;
- (_Bool)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)arg1;
- (void)_handlePassesLibraryChangedNotification:(id)arg1;
- (void)_handleExitNearFieldNotification:(id)arg1;
- (void)_onqueue_transactionFailedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2;
- (void)_onqueue_transactionEndedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2;
- (void)_onqueue_transactionStartedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2;
- (void)_handleExpressTransactionFailedNotification:(id)arg1;
- (void)_handleExpressTransactionEndNotification:(id)arg1;
- (void)_handleExpressTransactionTimeOutNotification:(id)arg1;
- (void)_handleExpressTransactionStartNotification:(id)arg1;
- (void)_handleEnterNearFieldNotification:(id)arg1;
- (void)_stopListeningForExpressNotifications;
- (void)_startListeningForExpressNotifications;
- (void)_transitionToStatus:(unsigned long long)arg1 forExpressPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
@property(readonly, nonatomic) __weak NSDistributedNotificationCenter *distributedNotificationCenter; // @synthesize distributedNotificationCenter=_distributedNotificationCenter;
@property(readonly, nonatomic) __weak PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
- (id)_queue_paymentService;
- (void)reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2;
- (id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4 callbackQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

