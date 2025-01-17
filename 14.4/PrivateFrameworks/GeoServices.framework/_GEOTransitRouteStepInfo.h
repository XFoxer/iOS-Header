//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOStep, GEOTransitStep;

__attribute__((visibility("hidden")))
@interface _GEOTransitRouteStepInfo : NSObject
{
    long long _routeSegmentType;
    struct _NSRange _pointRange;
    GEOTransitStep *_transitStep;
    unsigned int _duration;
    GEOStep *_walkingStep;
    struct _NSRange _maneuverPointRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
@property(retain, nonatomic) GEOStep *walkingStep; // @synthesize walkingStep=_walkingStep;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;
@property(nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(nonatomic) long long routeSegmentType; // @synthesize routeSegmentType=_routeSegmentType;
- (unsigned long long)numPoints;
@property(readonly, nonatomic) double distance;

@end

