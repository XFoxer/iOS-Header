//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (FezAdditions)
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
+ (id)__imDataWithHexString:(id)arg1;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
@property(readonly, nonatomic) NSData *SHA256Data;
@property(readonly, nonatomic) NSString *SHA1HexString;
@property(readonly, nonatomic) NSData *SHA1Data;
@end

