//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSTimeZoneChange : NSObject
{
    double _interval;
    long long _tzOffsetTo;
}

- (long long)compare:(id)arg1;
- (id)description;
- (_Bool)isCloseTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)tzOffsetTo;
- (double)interval;
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;

@end

