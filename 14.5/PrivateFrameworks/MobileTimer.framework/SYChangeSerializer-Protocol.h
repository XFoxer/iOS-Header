//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSData;
@protocol SYChange, SYObject;

@protocol SYChangeSerializer <NSObject>
- (id <SYChange>)changeFromData:(NSData *)arg1 ofType:(long long)arg2;
- (NSData *)dataFromChange:(id <SYChange>)arg1;

@optional
- (id <SYChange>)decodeChangeData:(NSData *)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (NSData *)encodeSYChangeForBackwardCompatibility:(id <SYChange>)arg1 protocolVersion:(long long)arg2;
- (id <SYObject>)SYObjectWithData:(NSData *)arg1;
- (NSData *)dataWithSYObject:(id <SYObject>)arg1;
@end

