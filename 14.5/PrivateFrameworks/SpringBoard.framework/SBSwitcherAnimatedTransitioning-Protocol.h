//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, SBWorkspaceApplicationSceneTransitionContext;

@protocol SBSwitcherAnimatedTransitioning <NSObject>
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) _Bool canInterruptActiveTransition;
- (void)performTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 animated:(_Bool)arg2 alongsideAnimationHandler:(void (^)(void (^)(_Bool, _Bool) (^)(NSString *)))arg3 completion:(void (^)(_Bool))arg4;
@end

