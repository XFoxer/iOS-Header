//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@class NSString;

@interface NSData (FCKVSCoding) <FCKeyValueStoreCoding>
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)fc_randomDataWithLength:(unsigned long long)arg1;
- (void)writeToKeyValuePair:(id)arg1;
- (_Bool)fc_anefKeyIsValid:(id)arg1;
- (id)fc_anefDecryptWithKey:(id)arg1;
- (id)fc_anefEncryptWithKey:(id)arg1;
- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)fc_sha256;
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

