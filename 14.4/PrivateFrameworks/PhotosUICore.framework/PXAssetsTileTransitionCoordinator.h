//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileTransitionAnimationCoordinator-Protocol.h>

@class NSArray, NSIndexSet, NSString, PXAssetsTilingLayout, PXBasicTileAnimationOptions, PXSectionedChangeDetailsRepository, PXTilingChange;

@interface PXAssetsTileTransitionCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    _Bool _treatRemovalsAsDeletes;
    _Bool _delayInsertions;
    _Bool __shouldCrossfade;
    PXTilingChange *__tilingChange;
    PXBasicTileAnimationOptions *__basicAnimationOptions;
    PXSectionedChangeDetailsRepository *__changeHistory;
    NSArray *__changeDetails;
    NSIndexSet *__kindsWithDisabledAnimation;
    NSIndexSet *__kindsCoveringContentTiles;
    NSIndexSet *__kindsCenteredOnContentTiles;
    PXAssetsTilingLayout *__fromLayout;
    PXAssetsTilingLayout *__toLayout;
}

+ (id)transitionCoordinatorForChange:(id)arg1 changeHistory:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXAssetsTilingLayout *_toLayout; // @synthesize _toLayout=__toLayout;
@property(readonly, nonatomic) PXAssetsTilingLayout *_fromLayout; // @synthesize _fromLayout=__fromLayout;
@property(readonly, nonatomic) NSIndexSet *_kindsCenteredOnContentTiles; // @synthesize _kindsCenteredOnContentTiles=__kindsCenteredOnContentTiles;
@property(readonly, nonatomic) NSIndexSet *_kindsCoveringContentTiles; // @synthesize _kindsCoveringContentTiles=__kindsCoveringContentTiles;
@property(readonly, nonatomic) NSIndexSet *_kindsWithDisabledAnimation; // @synthesize _kindsWithDisabledAnimation=__kindsWithDisabledAnimation;
@property(readonly, nonatomic) NSArray *_changeDetails; // @synthesize _changeDetails=__changeDetails;
@property(readonly, nonatomic) PXSectionedChangeDetailsRepository *_changeHistory; // @synthesize _changeHistory=__changeHistory;
@property(readonly, nonatomic) _Bool _shouldCrossfade; // @synthesize _shouldCrossfade=__shouldCrossfade;
@property(readonly, nonatomic) PXBasicTileAnimationOptions *_basicAnimationOptions; // @synthesize _basicAnimationOptions=__basicAnimationOptions;
@property(readonly, nonatomic) PXTilingChange *_tilingChange; // @synthesize _tilingChange=__tilingChange;
@property(nonatomic) _Bool delayInsertions; // @synthesize delayInsertions=_delayInsertions;
@property(nonatomic) _Bool treatRemovalsAsDeletes; // @synthesize treatRemovalsAsDeletes=_treatRemovalsAsDeletes;
- (void)enableAnimationsForTileKind:(unsigned long long)arg1;
- (void)disableAnimationsForTileKind:(unsigned long long)arg1;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

