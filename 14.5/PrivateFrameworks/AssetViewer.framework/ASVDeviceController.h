//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface ASVDeviceController : NSObject
{
    CALayer *_deviceLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_holeLayer;
    CALayer *_shineLayer;
    CALayer *_shineInnerLayer;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
- (void)update:(double)arg1 visibility:(double)arg2 layer:(id)arg3;
- (id)initWithDeviceMaskImage:(id)arg1;
@property(nonatomic) float opacity;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) CALayer *holeLayer;
@property(readonly, nonatomic) CALayer *deviceLayer;

@end

