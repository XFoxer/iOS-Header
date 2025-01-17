//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCLRecurrenceSchedule;

@interface SCLSettingsViewModel : NSObject
{
    _Bool _enabled;
    unsigned long long _scheduleType;
    long long _repeatSchedule;
    NSArray *_timeIntervals;
    SCLRecurrenceSchedule *_customSchedule;
    NSArray *_historyItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *historyItems; // @synthesize historyItems=_historyItems;
@property(copy, nonatomic) SCLRecurrenceSchedule *customSchedule; // @synthesize customSchedule=_customSchedule;
@property(copy, nonatomic) NSArray *timeIntervals; // @synthesize timeIntervals=_timeIntervals;
@property(nonatomic) long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)init;

@end

