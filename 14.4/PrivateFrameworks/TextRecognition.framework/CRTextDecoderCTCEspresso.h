//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextRecognition/CRTextDecoderCTCV2.h>

@interface CRTextDecoderCTCEspresso : CRTextDecoderCTCV2
{
}

- (void)_decodeFeaturesWithInfo:(id)arg1 activations:(id)arg2 imageSize:(struct CGSize)arg3 error:(id *)arg4;
- (void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long *)arg2 outputArrays:(vector_b7fe23f3 *)arg3;
- (id)_buildActivationMatrices:(id)arg1;
- (void)decodeOutput:(id)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;

@end

