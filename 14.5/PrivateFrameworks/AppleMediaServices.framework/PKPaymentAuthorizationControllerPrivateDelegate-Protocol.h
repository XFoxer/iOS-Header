//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class NSError, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPaymentAuthorizationController, PKServiceProviderPurchase;

@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>

@optional
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizeContextWithHandler:(void (^)(PKPaymentAuthorizationResult *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizeDisbursementVoucher:(PKDisbursementVoucher *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePurchase:(PKServiceProviderPurchase *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 willFinishWithError:(NSError *)arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
@end

