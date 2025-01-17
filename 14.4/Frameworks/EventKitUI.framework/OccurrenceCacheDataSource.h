//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/OccurrenceCacheDataSourceProtocol-Protocol.h>

@class EKEventStore, NSArray, NSSet, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>
{
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    int _cachedDaysSeed;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)stopSearching;
- (void)searchWithTerm:(id)arg1;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (long long)cachedDayCount;
- (id)_cachedDays;
- (_Bool)cachedOccurrencesAreLoaded;
- (_Bool)cachedOccurrencesAreBeingGenerated;
- (_Bool)supportsFakeTodaySection;
- (_Bool)supportsInvitations;
- (void)invalidateCachedOccurrences;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

