//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface VUIMediaStartTimeInfo : NSObject
{
    NSNumber *_startTime;
    NSDate *_timestamp;
    long long _type;
    NSString *_source;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
- (id)description;
- (id)initWithStartTime:(id)arg1 timestamp:(id)arg2 type:(long long)arg3 source:(id)arg4;

@end

