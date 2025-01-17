//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNNotificationRecord, NSArray, NSString;

@protocol CALNNotificationManager <NSObject>
@property(readonly, nonatomic) _Bool isProtectedDataAvailable;
- (void)removeRecordWithSourceIdentifier:(NSString *)arg1 sourceClientIdentifier:(NSString *)arg2;
- (void)updateRecord:(CALNNotificationRecord *)arg1;
- (void)addRecord:(CALNNotificationRecord *)arg1;
- (NSArray *)fetchRecordsWithSourceIdentifier:(NSString *)arg1;
@end

