//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/_WKAuthenticatorResponse.h>

@class NSData;

@interface _WKAuthenticatorAttestationResponse : _WKAuthenticatorResponse
{
    NSData *_attestationObject;
}

@property(readonly, nonatomic) NSData *attestationObject; // @synthesize attestationObject=_attestationObject;
- (id)initWithRawId:(id)arg1 extensions:(RetainPtr_3b4b0e92 *)arg2 attestationObject:(id)arg3;

@end

