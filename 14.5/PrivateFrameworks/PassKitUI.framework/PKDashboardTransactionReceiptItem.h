//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKPaymentTransaction, PKTransactionReceipt, PKTransactionSourceCollection;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem>
{
    PKTransactionReceipt *_receipt;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyCollection;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PKFamilyMemberCollection *familyCollection; // @synthesize familyCollection=_familyCollection;
@property(retain, nonatomic) PKAccountUserCollection *accountUserCollection; // @synthesize accountUserCollection=_accountUserCollection;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) PKTransactionReceipt *receipt; // @synthesize receipt=_receipt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

