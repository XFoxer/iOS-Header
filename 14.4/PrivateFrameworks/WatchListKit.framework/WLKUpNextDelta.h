//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface WLKUpNextDelta : NSObject <NSSecureCoding>
{
    NSDictionary *_backingDictionary;
    NSDate *_timestamp;
    NSDate *_expirationDate;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)deltaByMergingItemsFromDelta:(id)arg1;
- (_Bool)isExpired;
@property(readonly, copy, nonatomic) NSArray *additions;
@property(readonly, copy, nonatomic) NSArray *removals;
- (id)initWithDictionary:(id)arg1;

@end

