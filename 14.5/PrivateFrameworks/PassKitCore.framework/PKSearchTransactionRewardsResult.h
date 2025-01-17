//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKSearchAutocompleteToken-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken>
{
    NSDecimalNumber *_rewardsValue;
    unsigned long long _rewardsValueUnit;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardsValueUnit; // @synthesize rewardsValueUnit=_rewardsValueUnit;
@property(retain, nonatomic) NSDecimalNumber *rewardsValue; // @synthesize rewardsValue=_rewardsValue;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)tokenType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

