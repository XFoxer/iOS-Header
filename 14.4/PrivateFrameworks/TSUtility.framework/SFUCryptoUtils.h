//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFUCryptoUtils : NSObject
{
}

+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(_Bool)arg4 zipStream:(id *)arg5;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(_Bool)arg3 zipStream:(id *)arg4;
+ (_Bool)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (_Bool)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (id)saltForSageFiles;
+ (id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2;
+ (unsigned int)ivLengthForKey:(id)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (id)generateRandomSaltWithLength:(unsigned long long)arg1;
+ (id)generateRandomSalt;
+ (_Bool)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;

@end

