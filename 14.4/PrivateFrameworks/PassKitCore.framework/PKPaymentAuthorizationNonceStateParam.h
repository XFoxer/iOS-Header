//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam
{
    NSData *_credential;
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
}

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // @synthesize evaluationResponse=_evaluationResponse;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (id)description;

@end

