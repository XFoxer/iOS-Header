//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam
{
    NSError *_error;
}

+ (id)paramWithError:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)description;

@end

