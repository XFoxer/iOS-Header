//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCMotionEvent-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCMotionEventImpl : NSObject <_GCMotionEvent>
{
    _Bool _hasGyro;
    _Bool _hasAccelerometer;
    _Bool _hasAttitude;
    double _gyroPitch;
    double _gyroYaw;
    double _gyroRoll;
    double _accelerometerX;
    double _accelerometerY;
    double _accelerometerZ;
    double _attitudeW;
    double _attitudeX;
    double _attitudeY;
    double _attitudeZ;
}

@property(nonatomic) double attitudeZ; // @synthesize attitudeZ=_attitudeZ;
@property(nonatomic) double attitudeY; // @synthesize attitudeY=_attitudeY;
@property(nonatomic) double attitudeX; // @synthesize attitudeX=_attitudeX;
@property(nonatomic) double attitudeW; // @synthesize attitudeW=_attitudeW;
@property(nonatomic) _Bool hasAttitude; // @synthesize hasAttitude=_hasAttitude;
@property(nonatomic) double accelerometerZ; // @synthesize accelerometerZ=_accelerometerZ;
@property(nonatomic) double accelerometerY; // @synthesize accelerometerY=_accelerometerY;
@property(nonatomic) double accelerometerX; // @synthesize accelerometerX=_accelerometerX;
@property(nonatomic) _Bool hasAccelerometer; // @synthesize hasAccelerometer=_hasAccelerometer;
@property(nonatomic) double gyroRoll; // @synthesize gyroRoll=_gyroRoll;
@property(nonatomic) double gyroYaw; // @synthesize gyroYaw=_gyroYaw;
@property(nonatomic) double gyroPitch; // @synthesize gyroPitch=_gyroPitch;
@property(nonatomic) _Bool hasGyro; // @synthesize hasGyro=_hasGyro;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMotionEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

