//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSMTIEValue : NSObject
{
    double _observationInterval;
    double _mtie;
}

@property(readonly, nonatomic) double mtie; // @synthesize mtie=_mtie;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2;

@end

