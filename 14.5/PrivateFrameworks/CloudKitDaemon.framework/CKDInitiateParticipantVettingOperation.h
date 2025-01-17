//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDInitiateParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _participantVettingProgressBlock;
    CKShareMetadata *_shareMetadata;
    NSData *_encryptedKey;
    NSString *_participantID;
    NSString *_address;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(copy, nonatomic) CDUnknownBlockType participantVettingProgressBlock; // @synthesize participantVettingProgressBlock=_participantVettingProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_sendRequest:(_Bool)arg1;
- (int)operationType;
- (void)main;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;
- (id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id *)arg2;
- (void)_handleVettingInitiationProgress:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

