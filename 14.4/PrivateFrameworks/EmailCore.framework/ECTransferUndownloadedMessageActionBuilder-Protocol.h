//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageActionBuilder-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol ECTransferUndownloadedMessageActionBuilder <ECLocalMessageActionBuilder>
@property(retain, nonatomic) NSArray *itemsToDelete;
@property(copy, nonatomic) NSString *oldestPersistedRemoteID;
@property(retain, nonatomic) NSURL *destinationMailboxURL;
@property(retain, nonatomic) NSURL *sourceMailboxURL;
@property(nonatomic) long long transferType;
@end

