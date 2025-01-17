//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowsHandlingNonAuthenticationDialogs;
    _Bool _shouldRecordLastAuthenticationDialogResponseTime;
}

+ (_Bool)supportsSecureCoding;
- (void)_handleFamilyPermissionButtonAction:(id)arg1 usingRequestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

