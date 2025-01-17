//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageListItem-Protocol.h>

@class ECMessageFlags, ECSubject, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID;

@protocol EMMutableMessageListItem <EMMessageListItem>
@property long long _internalID;
@property(retain) id <EMCollectionItemID> displayMessageItemID;
@property(copy) NSArray *mailboxes;
@property(copy) NSArray *mailboxObjectIDs;
@property long long conversationID;
@property unsigned long long count;
@property long long conversationNotificationLevel;
@property _Bool hasAttachments;
@property _Bool isBlocked;
@property _Bool isVIP;
@property(copy) NSIndexSet *flagColors;
@property _Bool hasUnflagged;
@property(retain) ECMessageFlags *flags;
@property _Bool isCCMe;
@property _Bool isToMe;
@property(copy) NSArray *ccList;
@property(copy) NSArray *toList;
@property(copy) NSArray *senderList;
@property(copy) NSString *summary;
@property(retain) ECSubject *subject;
@property(retain) NSDate *date;
@end

