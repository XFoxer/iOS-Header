//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>
#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface NNMKMailboxSelection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_mailboxesWithAllMessagesSyncEnabled;
    NSArray *_aggregatedMailboxes;
    unsigned long long _aggregatedMailboxesFilterTypes;
    NSSet *_mailboxesWithAllMessagesSyncEnabledIds;
    NSSet *_aggregatedMailboxesId;
    NSArray *_allMailboxesSyncEnabled;
    NSMutableDictionary *_allMailboxesSyncEnabledById;
}

+ (id)mailboxChangesApplyingSelection:(id)arg1 previousSelection:(id)arg2;
+ (unsigned long long)firstFilterTypeFromTypes:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allMailboxesSyncEnabledById; // @synthesize allMailboxesSyncEnabledById=_allMailboxesSyncEnabledById;
@property(retain, nonatomic) NSArray *allMailboxesSyncEnabled; // @synthesize allMailboxesSyncEnabled=_allMailboxesSyncEnabled;
@property(retain, nonatomic) NSSet *aggregatedMailboxesId; // @synthesize aggregatedMailboxesId=_aggregatedMailboxesId;
@property(retain, nonatomic) NSSet *mailboxesWithAllMessagesSyncEnabledIds; // @synthesize mailboxesWithAllMessagesSyncEnabledIds=_mailboxesWithAllMessagesSyncEnabledIds;
@property(nonatomic) unsigned long long aggregatedMailboxesFilterTypes; // @synthesize aggregatedMailboxesFilterTypes=_aggregatedMailboxesFilterTypes;
@property(retain, nonatomic) NSArray *aggregatedMailboxes; // @synthesize aggregatedMailboxes=_aggregatedMailboxes;
@property(retain, nonatomic) NSArray *mailboxesWithAllMessagesSyncEnabled; // @synthesize mailboxesWithAllMessagesSyncEnabled=_mailboxesWithAllMessagesSyncEnabled;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isMailboxFilterEnabled:(unsigned long long)arg1;
- (id)mailboxWithId:(id)arg1;
- (_Bool)containsMailboxFilter:(id)arg1;
- (_Bool)hasAggregateMailboxesForAllMessagesOnly;
- (_Bool)hasSingleMailboxSelectionOnly;
- (void)_setupWithAccounts:(id)arg1;
- (void)_setupWithMailboxes:(id)arg1;
- (_Bool)hasSelection;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1;
- (id)initWithAccounts:(id)arg1;

@end

