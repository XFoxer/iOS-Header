//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep
{
    NSMutableSet *_alreadySeenMasterScopedIdentifiers;
    unsigned long long _maximumCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;

@end

