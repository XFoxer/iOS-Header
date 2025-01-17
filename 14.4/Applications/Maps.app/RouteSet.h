//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimeZone, Route;

__attribute__((visibility("hidden")))
@interface RouteSet : NSObject
{
    NSArray *_routesAndContingencies;
    Route *_currentRoute;
    NSArray *_routes;
    Route *_drivingRouteEquivalentToWalkingRoute;
    NSArray *_trafficIncidentsOffRoutes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *trafficIncidentsOffRoutes; // @synthesize trafficIncidentsOffRoutes=_trafficIncidentsOffRoutes;
@property(readonly, nonatomic) __weak Route *drivingRouteEquivalentToWalkingRoute; // @synthesize drivingRouteEquivalentToWalkingRoute=_drivingRouteEquivalentToWalkingRoute;
@property(readonly, nonatomic) NSArray *routesAndContingencies; // @synthesize routesAndContingencies=_routesAndContingencies;
@property(readonly, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) Route *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(readonly, nonatomic) _Bool containsOnlyWalkingRoutes;
- (id)_routeInArray:(id)arg1 matchingComposedRoute:(id)arg2;
- (id)routeForComposedRoute:(id)arg1;
- (id)trafficIncidentsUsingSelectedRoute:(id)arg1 includeUnselectedRoutes:(_Bool)arg2;
- (void)_conflateWalkingAndDrivingRoutes;
- (CDStruct_c3b9c2ee)_mapPointForRoute:(id)arg1 atIndex:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool hasScheduledDepartures;
@property(readonly, nonatomic) NSTimeZone *endTimeZone;
@property(readonly, nonatomic) NSTimeZone *startTimeZone;
- (id)description;
- (id)initWithRoutes:(id)arg1;
- (id)initWithGEOComposedRoutes:(id)arg1;

@end

