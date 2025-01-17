//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/NAEquatable-Protocol.h>
#import <Sleep/NAHashable-Protocol.h>
#import <Sleep/NSCopying-Protocol.h>

@class HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings, NSDate, NSString;

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable>
{
    HKSPSleepSchedule *_sleepSchedule;
    HKSPSleepSettings *_sleepSettings;
    HKSPSleepEventRecord *_sleepEventRecord;
}

+ (id)sleepScheduleModelWithSleepSchedule:(id)arg1 sleepSettings:(id)arg2 sleepEventRecord:(id)arg3;
+ (id)testSleepScheduleModelForMigratedUserPriorToOnboardingWithSingularWaketime;
+ (id)testSleepScheduleModelForFullyOnboardedUserWithSingularBedtime;
+ (id)testSleepScheduleModelForMigratedUserPriorToOnboarding;
+ (id)testSleepScheduleModelForFullyOnboardedUser;
+ (id)testSleepScheduleModelWithSchedule:(id)arg1 settings:(id)arg2;
+ (id)testSleepScheduleModelWithSchedule:(id)arg1;
+ (id)testSleepScheduleModelWithAlarmEnabled:(_Bool)arg1;
+ (id)testSleepScheduleModel;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // @synthesize sleepEventRecord=_sleepEventRecord;
@property(readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
@property(readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (long long)alarmStatusForOccurrence:(id)arg1;
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)arg1 searchBackwards:(_Bool)arg2;
- (id)_timelineResultsDueAfterDate:(id)arg1;
- (id)timelineForDate:(id)arg1;
- (id)previousResolvedOccurrenceBeforeDate:(id)arg1;
- (id)previousOccurrenceBeforeDate:(id)arg1;
- (id)nextResolvedOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2;
- (id)nextResolvedOccurrenceAfterDate:(id)arg1;
- (id)nextOccurrenceAfterDate:(id)arg1 repeatingWithinInterval:(double)arg2;
- (id)nextOccurrenceAfterDate:(id)arg1;
- (id)upcomingResolvedOccurrenceAfterDate:(id)arg1;
- (id)upcomingOccurrenceAfterDate:(id)arg1;
- (id)_upcomingEventsDueAfterDate:(id)arg1 searchBackwards:(_Bool)arg2;
- (id)previousEventsDueBeforeDate:(id)arg1;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (id)nextEventDueAfterDate:(id)arg1;
- (id)previousEventWithIdentifier:(id)arg1 dueBeforeDate:(id)arg2;
- (id)nextEventWithIdentifier:(id)arg1 dueAfterDate:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEquivalentTo:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)chargingRemindersEnabledWithLogObject:(id)arg1;
@property(readonly, nonatomic) _Bool chargingRemindersEnabled;
- (_Bool)goodMorningScreenEnabledWithLogObject:(id)arg1;
@property(readonly, nonatomic) _Bool goodMorningScreenEnabled;
- (_Bool)goodMorningAlertNotificationsEnabledWithLogObject:(id)arg1;
@property(readonly, nonatomic) _Bool goodMorningAlertNotificationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

