//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSArray, NSString, PKAccount, PKAccountUserCollection, PKCreditAccountStatement, PKCreditAccountSummary, PKFamilyMemberCollection, PKPaymentTransactionGroup, PKPaymentWebService, PKTransactionSourceCollection;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>
{
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKPaymentWebService *_webService;
    unsigned long long _type;
    PKPaymentTransactionGroup *_transactionGroup;
    PKCreditAccountStatement *_statement;
    PKCreditAccountSummary *_summary;
    NSArray *_statements;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *statements; // @synthesize statements=_statements;
@property(retain, nonatomic) PKCreditAccountSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) PKCreditAccountStatement *statement; // @synthesize statement=_statement;
@property(retain, nonatomic) PKPaymentTransactionGroup *transactionGroup; // @synthesize transactionGroup=_transactionGroup;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(retain, nonatomic) PKFamilyMemberCollection *familyCollection; // @synthesize familyCollection=_familyCollection;
@property(retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
@property(retain, nonatomic) PKAccountUserCollection *accountUserCollection; // @synthesize accountUserCollection=_accountUserCollection;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

