//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAVAssetKeyCacheType-Protocol.h>

@class FCThreadSafeMutableDictionary, NSData;

@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType>
{
    FCThreadSafeMutableDictionary *_dictionary;
    NSData *_keyServerCertificate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *keyServerCertificate; // @synthesize keyServerCertificate=_keyServerCertificate;
@property(readonly, nonatomic) FCThreadSafeMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)clearKeyServerCertificate;
- (void)saveKeyServerCertificate:(id)arg1;
- (void)removeAllAssetKeys;
- (void)importAVAssetKey:(id)arg1;
- (void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4;
- (id)interestTokenForKeyURIs:(id)arg1;
- (id)assetKeyForURI:(id)arg1;
- (id)init;

@end

