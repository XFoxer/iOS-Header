//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class FCFeedRange, NSData, NSDate, NSNumber, NSSet;

@interface FCFDBFeedSegment : NSManagedObject
{
}

- (id)description;
@property(readonly, nonatomic) FCFeedRange *feedRange;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;

// Remaining properties
@property(nonatomic) unsigned long long bottom; // @dynamic bottom;
@property(retain, nonatomic) NSData *ckCursor; // @dynamic ckCursor;
@property(retain, nonatomic) NSNumber *feedItemCount; // @dynamic feedItemCount;
@property(retain, nonatomic) NSSet *feedItemIndexes; // @dynamic feedItemIndexes;
@property(retain, nonatomic) NSDate *lastAccessDate; // @dynamic lastAccessDate;
@property(nonatomic) unsigned long long top; // @dynamic top;

@end

