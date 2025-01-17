//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PGManager, PGMoodGenerationContext;
@protocol OS_dispatch_group;

@interface PGHighlightTailor : NSObject
{
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
    PGManager *_manager;
    NSArray *_enrichmentProfiles;
    NSSet *_verifiedPersonLocalIdentifiers;
}

+ (_Bool)itemScoreIsAutoplayable:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *enrichmentProfiles; // @synthesize enrichmentProfiles=_enrichmentProfiles;
@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2;
- (id)keyAssetFromHighlight:(id)arg1;
- (id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)enrichDayHighlights:(id)arg1 dayGroupHighlights:(id)arg2 withOptions:(unsigned long long)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (_Bool)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2;
- (void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2;
- (id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)computeChangedVisibilityScoresForItems:(id)arg1;
- (double)highlightVisibilityWeightForItem:(id)arg1;
- (id)assetSortDescriptors;
@property(readonly) NSSet *verifiedPersonLocalIdentifiers; // @synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers;
- (id)initForTesting;
- (id)initWithManager:(id)arg1;

@end

