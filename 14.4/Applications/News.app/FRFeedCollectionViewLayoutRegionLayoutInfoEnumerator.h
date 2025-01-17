//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class FRFeedCollectionViewLayoutRegion, NFLFeedTileLayoutInfo, NSString;

@interface FRFeedCollectionViewLayoutRegionLayoutInfoEnumerator : NSEnumerator
{
    NFLFeedTileLayoutInfo *_currentLayoutInfo;
    NSString *_currentLayoutInfoID;
    long long _currentIndex;
    long long _currentRelativeYOrigin;
    FRFeedCollectionViewLayoutRegion *_owningRegion;
    NSEnumerator *_layoutInfoIDEnumerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSEnumerator *layoutInfoIDEnumerator; // @synthesize layoutInfoIDEnumerator=_layoutInfoIDEnumerator;
@property(retain, nonatomic) FRFeedCollectionViewLayoutRegion *owningRegion; // @synthesize owningRegion=_owningRegion;
@property(nonatomic) long long currentRelativeYOrigin; // @synthesize currentRelativeYOrigin=_currentRelativeYOrigin;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSString *currentLayoutInfoID; // @synthesize currentLayoutInfoID=_currentLayoutInfoID;
@property(retain, nonatomic) NFLFeedTileLayoutInfo *currentLayoutInfo; // @synthesize currentLayoutInfo=_currentLayoutInfo;
- (id)nextObject;
- (id)initWithRegion:(id)arg1 layoutInfoIDEnumerator:(id)arg2;
- (id)init;

@end

