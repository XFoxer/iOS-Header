//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CKAsyncTransactionContainer
@property(readonly, nonatomic) unsigned long long ck_asyncTransactionContainerState;
@property(nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) _Bool ck_asyncTransactionContainer;
- (void)ck_asyncTransactionContainerStateDidChange;
- (void)ck_cancelAsyncTransactions;
@end

