//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppPredictionUI/APUIIntentHandlingViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionPresenting-Protocol.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, APUITVIntentHandler, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLClickPresentationInteractionManager, SFSearchResult, UIView;
@protocol APUIActionFeedbackDelegate, APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLClickPresentationInteractionPresentable;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate>
{
    APUILongLookViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;
    APUITVIntentHandler *_tvIntentHandler;
    double _preferredPlatterContentHeight;
    _Bool _acceptPlatterTaps;
    long long _dismissalReason;
    _Bool _actionCompletedSuccessfully;
    _Bool _hasShownLongLook;
    _Bool _wasPresentedImmediately;
    _Bool _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    NSString *_bundleId;
    SFSearchResult *_searchResult;
    long long _displayContext;
    id <APUIShortLookViewControllerDelegate> _delegate;
    id <APUIActionFeedbackDelegate> _actionFeedbackDelegate;
    APUIIntentHandlingViewController *_intentHandlingViewController;
    ATXAction *_atxAction;
    INInteraction *_interaction;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(retain, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // @synthesize intentHandlingViewController=_intentHandlingViewController;
@property(nonatomic) __weak id <APUIActionFeedbackDelegate> actionFeedbackDelegate; // @synthesize actionFeedbackDelegate=_actionFeedbackDelegate;
@property(nonatomic) __weak id <APUIShortLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
- (void)intentHandlingViewController:(id)arg1 didComplete:(_Bool)arg2;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize)arg2;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (_Bool)_isLongLookDebugUIEnabled;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (_Bool)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (void)handOverIntentHandlingToApp;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (_Bool)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)containerViewForclickPresentationInteractionManager:(id)arg1;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (id)_debugStringForNSUA;
- (_Bool)_isDoNotDisturbIntent;
- (_Bool)_shouldAcceptPlatterTaps;
- (long long)_actionTypeForMetrics;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (id)_intentConfirmationActions;
- (void)_handleActionButtonForIntent;
- (id)_cardContentWithIntentResponse:(id)arg1;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)_resetRepresentedObjectState;
- (id)_defaults;
@property(readonly, nonatomic) UIView *viewForPreview;
- (_Bool)presentImmediately:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setView:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly) Class superclass;

@end

