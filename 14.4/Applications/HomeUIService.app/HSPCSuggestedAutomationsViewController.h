//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HSProxCardConfigurable-Protocol.h"

@class HSPCSuggestedAutomationsItemManager, HSProxCardCoordinator, HSSetupStateMachineConfiguration, HUAvailableRelatedTriggerItemModuleController, NAFuture, NSString, UIViewController;

@interface HSPCSuggestedAutomationsViewController : HUItemTableViewController <HSProxCardConfigurable>
{
    HSSetupStateMachineConfiguration *config;
    HSProxCardCoordinator *coordinator;
    NSString *subtitle;
    HUAvailableRelatedTriggerItemModuleController *_recommendationModuleController;
    NAFuture *_commitInProgress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NAFuture *commitInProgress; // @synthesize commitInProgress=_commitInProgress;
@property(retain, nonatomic) HUAvailableRelatedTriggerItemModuleController *recommendationModuleController; // @synthesize recommendationModuleController=_recommendationModuleController;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config;
- (id)shouldSkip;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)commitConfiguration;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSPCSuggestedAutomationsItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

