//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintProviderType-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintModifierMap, FRFeedCollectionViewLayoutBlueprintModifierRunContext, NSMutableSet, NSOperationQueue, NSString;
@protocol FRFeedCollectionViewLayoutBlueprintIntegratorType;

@interface FRFeedCollectionViewLayoutBlueprintManager : NSObject <FRFeedCollectionViewLayoutBlueprintProviderType>
{
    _Bool _suspended;
    id <FRFeedCollectionViewLayoutBlueprintIntegratorType> _integrator;
    FRFeedCollectionViewLayoutBlueprint *_blueprint;
    NSOperationQueue *_operationQueue;
    FRFeedCollectionViewLayoutBlueprintModifierMap *_runningOrQueuedModifiers;
    NSMutableSet *_blockedModifiers;
    NSMutableSet *_ranModifiers;
    FRFeedCollectionViewLayoutBlueprintModifierRunContext *_currentModifierRunContext;
}

- (void).cxx_destruct;
@property(retain) FRFeedCollectionViewLayoutBlueprintModifierRunContext *currentModifierRunContext; // @synthesize currentModifierRunContext=_currentModifierRunContext;
@property(retain, nonatomic) NSMutableSet *ranModifiers; // @synthesize ranModifiers=_ranModifiers;
@property(retain, nonatomic) NSMutableSet *blockedModifiers; // @synthesize blockedModifiers=_blockedModifiers;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintModifierMap *runningOrQueuedModifiers; // @synthesize runningOrQueuedModifiers=_runningOrQueuedModifiers;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) __weak id <FRFeedCollectionViewLayoutBlueprintIntegratorType> integrator; // @synthesize integrator=_integrator;
- (void)asyncApplyModifier:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)createCleanupBlockForModifier:(id)arg1;
- (_Bool)suspended;
@property(readonly, nonatomic) _Bool isQueueEffectivelyEmpty;
@property(readonly, nonatomic) _Bool isQueueEmpty;
- (_Bool)hasRanModifier:(unsigned long long)arg1;
- (_Bool)hasRunningOrQueuedModifier:(unsigned long long)arg1;
- (_Bool)hasBlockedModifier:(unsigned long long)arg1;
- (void)clearBlockOnModifier:(unsigned long long)arg1;
- (void)blockModifier:(unsigned long long)arg1;
- (void)collectionViewBoundsDidChange:(struct CGRect)arg1;
- (void)cancel;
- (id)modifyBlueprintWithModifier:(id)arg1 allowSync:(_Bool)arg2 fallbackAsyncModifier:(id)arg3 asyncCompletion:(CDUnknownBlockType)arg4;
- (void)modifyBlueprintWithModifier:(id)arg1 blockUntilLifted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyBlueprintWithModifierAndBlockModifierUntilLifted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modifyBlueprintWithModifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)modifyBlueprintPromiseWithModifier:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

