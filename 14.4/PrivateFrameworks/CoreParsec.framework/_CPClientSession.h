//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPClientSession-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPUsageEnvelope, _CPUsageSinceLookback;

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding>
{
    _Bool _removeTimestamps;
    _Bool _duEnabled;
    int _previousSessionEndReason;
    NSString *_agent;
    NSString *_userGuidString;
    NSDictionary *_resourceVersions;
    double _sessionStart;
    NSString *_parsecDeveloperID;
    NSString *_countryCode;
    NSString *_locale;
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPUsageEnvelope *_cohortsFeedback;
    NSData *_jsonFeedback;
    NSArray *_feedbacks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *feedbacks; // @synthesize feedbacks=_feedbacks;
@property(copy, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(retain, nonatomic) _CPUsageEnvelope *cohortsFeedback; // @synthesize cohortsFeedback=_cohortsFeedback;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool duEnabled; // @synthesize duEnabled=_duEnabled;
@property(copy, nonatomic) NSString *parsecDeveloperID; // @synthesize parsecDeveloperID=_parsecDeveloperID;
@property(nonatomic) _Bool removeTimestamps; // @synthesize removeTimestamps=_removeTimestamps;
@property(nonatomic) int previousSessionEndReason; // @synthesize previousSessionEndReason=_previousSessionEndReason;
@property(nonatomic) double sessionStart; // @synthesize sessionStart=_sessionStart;
@property(copy, nonatomic) NSDictionary *resourceVersions; // @synthesize resourceVersions=_resourceVersions;
@property(copy, nonatomic) NSString *userGuidString; // @synthesize userGuidString=_userGuidString;
@property(copy, nonatomic) NSString *agent; // @synthesize agent=_agent;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (void)addFeedback:(id)arg1;
- (void)clearFeedback;
- (void)setFeedback:(id)arg1;
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;
- (_Bool)getResourceVersions:(id *)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

