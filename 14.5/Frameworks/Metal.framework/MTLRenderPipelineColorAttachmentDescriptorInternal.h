//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setPixelFormat:(unsigned long long)arg1;
- (unsigned long long)pixelFormat;
- (void)setWriteMask:(unsigned long long)arg1;
- (unsigned long long)writeMask;
- (void)setAlphaBlendOperation:(unsigned long long)arg1;
- (unsigned long long)alphaBlendOperation;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;
- (unsigned long long)destinationAlphaBlendFactor;
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;
- (unsigned long long)sourceAlphaBlendFactor;
- (void)setRgbBlendOperation:(unsigned long long)arg1;
- (unsigned long long)rgbBlendOperation;
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;
- (unsigned long long)destinationRGBBlendFactor;
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;
- (unsigned long long)sourceRGBBlendFactor;
- (void)setBlendingEnabled:(_Bool)arg1;
- (_Bool)isBlendingEnabled;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

