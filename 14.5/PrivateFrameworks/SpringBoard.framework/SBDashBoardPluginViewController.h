//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/SBLockScreenPluginDelegate-Protocol.h>

@class NSString, SBLockScreenPlugin;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>
{
    SBLockScreenPlugin *_plugin;
}

+ (Class)viewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBLockScreenPlugin *plugin; // @synthesize plugin=_plugin;
- (long long)_presentationPriority;
- (void)_updateLegibility;
- (_Bool)handleEvent:(id)arg1;
- (void)pluginAppearanceDidChange:(id)arg1;
- (id)coverSheetIdentifier;
- (long long)presentationType;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationStyle;
- (void)willTransitionToPresented:(_Bool)arg1;
- (id)displayLayoutElementIdentifier;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (id)succinctDescriptionBuilder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)view;
- (id)initWithLockScreenPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

