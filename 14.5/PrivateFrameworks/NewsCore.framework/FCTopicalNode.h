//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSCountedSet, NSSet, NSString;

@interface FCTopicalNode : NSObject <NSCopying>
{
    double _score;
    _Bool _scored;
    NSSet *_identifiers;
    NSString *_identifier;
    NSSet *_displayedElements;
    NSCountedSet *_topicCollections;
    FCTopicalNode *_parent;
    NSSet *_children;
    double _scoreMultiplier;
    double _relatedness;
    double _specificity;
    double _parentRawScore;
    double _relatednessThreshold;
    double _relatednessKWeight;
    double _topicScoreWeight;
    double _highestScoringRelativeScoreMultiplier;
    NSString *_storedNodeIdentifier;
}

- (void).cxx_destruct;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

