//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol>
{
    NSNumber *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_serialize;
- (id)serializeWithError:(id *)arg1;
- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int *)arg3;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

