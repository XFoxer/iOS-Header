//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusMovementPerformerDelegate-Protocol.h>
#import <UIKitCore/_UIFocusSystemDelegate-Protocol.h>

@class NSString, UIWindowScene, _UIFocusScrollManager;

__attribute__((visibility("hidden")))
@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate>
{
    _Bool _handlesFocusMovementAction;
    _Bool _allowsForwardingFocusMovementActions;
    UIWindowScene *_windowScene;
    _UIFocusScrollManager *_scrollManager;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:) _Bool allowsForwardingFocusMovementActions; // @synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions;
@property(readonly, nonatomic) _UIFocusScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
- (_Bool)_shouldForwardFocusMovementRequest:(id)arg1;
- (_Bool)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;
- (_Bool)_focusSystem:(id)arg1 performFocusMovementWithInfo:(id)arg2;
- (_Bool)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg1;
- (id)_focusItemContainerForFocusSystem:(id)arg1;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (_Bool)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (id)initWithScene:(id)arg1 scrollManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

