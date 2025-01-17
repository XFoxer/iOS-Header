//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@protocol MTLFunction <NSObject>
@property(readonly) unsigned long long options;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) NSString *name;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *vertexAttributes;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) unsigned long long functionType;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@end

