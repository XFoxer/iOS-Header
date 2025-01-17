//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface HMIDeltaEFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_referenceImage;
    double _threshold;
}

- (void).cxx_destruct;
@property(readonly) double threshold; // @synthesize threshold=_threshold;
@property(readonly) CIImage *referenceImage; // @synthesize referenceImage=_referenceImage;
@property(readonly) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)initWithInputImage:(id)arg1 referenceImage:(id)arg2 threshold:(double)arg3;

@end

