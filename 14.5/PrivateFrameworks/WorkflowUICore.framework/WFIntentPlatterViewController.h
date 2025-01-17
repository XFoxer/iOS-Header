//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUICore/APUILongLookViewControllerDataSource-Protocol.h>
#import <WorkflowUICore/APUILongLookViewControllerDelegate-Protocol.h>
#import <WorkflowUICore/CRKCardPresentationDelegate-Protocol.h>
#import <WorkflowUICore/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <WorkflowUICore/PLClickPresentationInteractionPresenting-Protocol.h>

@class APUILongLookViewController, CRKCardPresentation, CRKCardPresentationConfiguration, INInteraction, NSString, PLClickPresentationInteractionManager, UIView;
@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, WFIntentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFIntentPlatterViewController : UIViewController <PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDelegate, APUILongLookViewControllerDataSource, CRKCardPresentationDelegate>
{
    _Bool _requiresConfirmation;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    id <WFIntentViewControllerDelegate> _delegate;
    INInteraction *_interaction;
    APUILongLookViewController *_longLookViewController;
    CRKCardPresentationConfiguration *_configuration;
    CRKCardPresentation *_cardPresentation;
    UIView *_sourceView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(readonly, nonatomic) CRKCardPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) APUILongLookViewController *longLookViewController; // @synthesize longLookViewController=_longLookViewController;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) __weak id <WFIntentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) UIView *viewForPreview;
- (void)dismissPlatterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentPlatterFromSourceView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePlatterSize;
@property(readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController;
- (void)updateProgressIndicator:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)confirmButtonTapped;
- (void)updateWithInteraction:(id)arg1;
- (id)initWithInteraction:(id)arg1 requiresConfirmation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly) Class superclass;

@end

