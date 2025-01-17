//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXPIFingerUtilities : NSObject
{
}

+ (id)pointerAnimationSettings;
+ (id)pointerFiltersForLuminanceLevel:(unsigned long long)arg1;
+ (_Bool)laserEnabled;
+ (unsigned long long)fingerShapeForCorner:(unsigned long long)arg1;
+ (id)_points:(id)arg1 adjustedForBounds:(struct CGRect)arg2;
+ (id)pointStringsForFingerModels:(id)arg1;
+ (id)fingerModelsForPointStrings:(id)arg1;
+ (void)updateFirstLocation:(struct CGPoint *)arg1 secondLocation:(struct CGPoint *)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4;
+ (id)defaultPinchLocationsAroundPoint:(struct CGPoint)arg1 withinBounds:(struct CGRect)arg2;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2 withinBounds:(struct CGRect)arg3;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(struct CGPoint)arg2;

@end

