//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBokehBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end

