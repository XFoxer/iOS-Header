//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFSignatures : NSObject
{
}

+ (id)stripSignatureMarkup:(id)arg1;
+ (id)signaturePlainTextFormat:(id)arg1;
+ (id)signatureMarkupFormat:(id)arg1;
+ (id)sharedInstance;
- (id)signaturePlainTextForSendingEmailAddress:(id)arg1;
- (id)signatureMarkupForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forEmailAddress:(id)arg2;
- (id)signatureForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forAccount:(id)arg2;
- (id)signatureForAccount:(id)arg1;
- (void)setUseAccountSignatures:(_Bool)arg1;
- (_Bool)useAccountSignatures;
- (void)clearSignature;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)_setValue:(id)arg1 value:(void *)arg2;
- (id)_getValue:(id)arg1;
- (id)defaultSignature;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

