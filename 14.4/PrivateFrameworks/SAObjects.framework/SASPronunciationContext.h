//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SASPronunciationContext : AceObject <SAAceSerializable>
{
}

+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationContext;
@property(copy, nonatomic) NSNumber *tokenOffset;
@property(copy, nonatomic) NSString *orthography;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property(copy, nonatomic) NSURL *domainObjectIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

