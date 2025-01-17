//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>
{
}

+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)seasonRange;
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSString *seasonType;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

