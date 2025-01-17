//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSSet;

@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>
{
    _Bool _exactMatchInSourceText;
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
    unsigned short _algorithmResultPosition;
    unsigned short _algorithmResultCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool exactMatchInSourceText; // @synthesize exactMatchInSourceText=_exactMatchInSourceText;
@property(readonly, nonatomic) unsigned short algorithmResultCount; // @synthesize algorithmResultCount=_algorithmResultCount;
@property(readonly, nonatomic) unsigned short algorithmResultPosition; // @synthesize algorithmResultPosition=_algorithmResultPosition;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) unsigned short impressionCount; // @synthesize impressionCount=_impressionCount;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTopicMetadata:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4 exactMatchInSourceText:(_Bool)arg5;
- (id)init;

@end

