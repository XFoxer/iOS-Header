//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/MTLResourceStateCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLTexture;

@protocol MTLResourceStateCommandEncoderSPI <MTLResourceStateCommandEncoder>

@optional
- (void)copyMappingStateFromTexture:(id <MTLTexture>)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id <MTLBuffer>)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;
@end

