//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation
{
    CDUnknownBlockType _modifyBadgeCompletionBlock;
    unsigned long long _badgeValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
@property(copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo; // @dynamic operationInfo;

@end

