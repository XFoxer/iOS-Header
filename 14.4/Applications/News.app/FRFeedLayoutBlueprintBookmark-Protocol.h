//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint, NSString;

@protocol FRFeedLayoutBlueprintBookmark <NSSecureCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *layoutInfoIDInLastBlueprint;
@property(readonly, nonatomic) _Bool hasPrefetchedViewport;
@property(readonly, nonatomic, getter=isAggregate) _Bool aggregate;
@property(readonly, nonatomic) struct CGSize viewportSize;
@property(readonly, nonatomic) unsigned long long offsetType;
@property(readonly, nonatomic) double scrollOffsetFromCenter;
@property(readonly, copy, nonatomic) NSString *headlineTileInfoBookmarkableID;
@property(readonly, copy, nonatomic) NSString *sectionID;
- (NSString *)layoutInfoIDInBlueprint:(FRFeedCollectionViewLayoutBlueprint *)arg1;
@end

