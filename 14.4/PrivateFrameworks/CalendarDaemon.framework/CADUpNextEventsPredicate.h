//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@interface CADUpNextEventsPredicate : EKPredicate
{
    double _startDateRestrictionThreshold;
}

+ (_Bool)supportsSecureCoding;
+ (id)_descriptionForOccurrence:(struct CalEventOccurrence *)arg1 ofEvent:(void *)arg2;
+ (_Bool)_occurrencePassesFilter:(struct CalEventOccurrence *)arg1 event:(void *)arg2;
@property(nonatomic) double startDateRestrictionThreshold; // @synthesize startDateRestrictionThreshold=_startDateRestrictionThreshold;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end

