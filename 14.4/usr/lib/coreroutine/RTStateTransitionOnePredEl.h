//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface RTStateTransitionOnePredEl : NSObject
{
    int _numOfTrans;
    double _yield;
    double _predResidualStart_s;
    double _resUncStart_s;
    double _predResidualStop_s;
    double _resUncStop_s;
    NSDate *_primaryStopDate;
    double _latestTransTimeStart_s;
    double _earliestTransTimeStart_s;
    double _density;
    unsigned long long _motionActivityType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long motionActivityType; // @synthesize motionActivityType=_motionActivityType;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double earliestTransTimeStart_s; // @synthesize earliestTransTimeStart_s=_earliestTransTimeStart_s;
@property(nonatomic) double latestTransTimeStart_s; // @synthesize latestTransTimeStart_s=_latestTransTimeStart_s;
@property(retain, nonatomic) NSDate *primaryStopDate; // @synthesize primaryStopDate=_primaryStopDate;
@property(nonatomic) double resUncStop_s; // @synthesize resUncStop_s=_resUncStop_s;
@property(nonatomic) double predResidualStop_s; // @synthesize predResidualStop_s=_predResidualStop_s;
@property(nonatomic) double resUncStart_s; // @synthesize resUncStart_s=_resUncStart_s;
@property(nonatomic) double predResidualStart_s; // @synthesize predResidualStart_s=_predResidualStart_s;
@property(nonatomic) double yield; // @synthesize yield=_yield;
@property(nonatomic) int numOfTrans; // @synthesize numOfTrans=_numOfTrans;
- (id)init;

@end

