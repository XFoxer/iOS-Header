//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKUpdatedReminderBackingObjectProvider-Protocol.h>

@class EKEventStore, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, REMStore;
@protocol OS_dispatch_queue;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
    REMStore *_remStore;
    EKEventStore *_eventStore;
}

+ (_Bool)isNotFoundError:(id)arg1;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (Class)frozenClassForReminderClass:(Class)arg1;
+ (id)log;
- (void).cxx_destruct;
@property(readonly) __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) REMStore *remStore; // @synthesize remStore=_remStore;
- (id)existingUpdatedObject:(id)arg1;
- (void)_reminderCopiedToNewList:(id)arg1;
- (id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2;
- (id)frozenAlarmForREMAlarms:(id)arg1;
- (id)frozenObjectForReminderObject:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (CDUnknownBlockType)completionBlockForFetchRequestToken:(id)arg1 remove:(_Bool)arg2;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkPredicate:(id)arg1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (void)reset;
- (id)_moveRemindersToNewLists:(id)arg1 error:(id *)arg2;
- (_Bool)_commit:(id *)arg1 error:(id *)arg2;
- (_Bool)commit:(id *)arg1;
- (void)fillInPath:(id)arg1 usingParents:(id)arg2;
- (_Bool)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id *)arg3;
- (id)resetBackingLocationWithBackingLocation:(id)arg1;
- (id)resetBackingAlarmWithBackingAlarm:(id)arg1;
- (_Bool)removeReminder:(id)arg1 error:(id *)arg2;
- (_Bool)saveReminder:(id)arg1 error:(id *)arg2;
- (id)createNewReminder;
- (id)backingReminderWithIdentifier:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (id)reminderWithIdentifier:(id)arg1;
- (id)defaultCalendarForNewReminders;
- (_Bool)removeCalendar:(id)arg1 error:(id *)arg2;
- (_Bool)saveCalendar:(id)arg1 error:(id *)arg2;
- (id)frozenCalendarFromCalendar:(id)arg1 error:(id *)arg2;
- (id)createNewReminderCalendar;
- (id)backingCalendarWithIdentifier:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
@property(readonly) NSArray *calendars;
- (id)_allLists;
- (void)_loadLists;
- (void)_loadListsIfNeeded;
- (_Bool)isSourceManaged:(id)arg1;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1;
- (id)cachedConstraintsForSource:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
@property(readonly) NSArray *sources;
- (void)_loadAccounts;
- (void)_loadAccountsIfNeeded;
- (void)remindersChanged;
- (id)initWithEventStore:(id)arg1 token:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

