//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CMFallDetectionEvent : NSObject
{
    NSDate *_date;
    long long _resolution;
}

@property(readonly, nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)dealloc;
- (id)initWithResolution:(long long)arg1 date:(id)arg2;
- (id)initWithAnomalyEvent:(id)arg1;

@end

