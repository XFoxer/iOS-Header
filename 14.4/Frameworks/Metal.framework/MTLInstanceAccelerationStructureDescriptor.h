//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAccelerationStructureDescriptor.h>

@class NSArray;
@protocol MTLBuffer;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor
{
    id <MTLBuffer> _instanceDescriptorBuffer;
    unsigned long long _instanceDescriptorBufferOffset;
    unsigned long long _instanceDescriptorStride;
    unsigned long long _instanceCount;
    NSArray *_instancedAccelerationStructures;
}

+ (id)descriptor;
@property(retain, nonatomic) NSArray *instancedAccelerationStructures; // @synthesize instancedAccelerationStructures=_instancedAccelerationStructures;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long instanceDescriptorStride; // @synthesize instanceDescriptorStride=_instanceDescriptorStride;
@property(nonatomic) unsigned long long instanceDescriptorBufferOffset; // @synthesize instanceDescriptorBufferOffset=_instanceDescriptorBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> instanceDescriptorBuffer; // @synthesize instanceDescriptorBuffer=_instanceDescriptorBuffer;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

