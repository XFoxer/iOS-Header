//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VCPMergeCandidatePair : NSObject
{
    unsigned long long _hash;
    NSString *_person1LocalIdentifier;
    NSString *_person2LocalIdentifier;
    NSString *_reason;
}

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) NSString *person2LocalIdentifier; // @synthesize person2LocalIdentifier=_person2LocalIdentifier;
@property(readonly) NSString *person1LocalIdentifier; // @synthesize person1LocalIdentifier=_person1LocalIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

@end

