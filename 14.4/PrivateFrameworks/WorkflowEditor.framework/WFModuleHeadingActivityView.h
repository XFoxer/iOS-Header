//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityIndicatorView.h>

#import <WorkflowEditor/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFModuleHeadingActivityView : UIActivityIndicatorView <WFActionEventObserver>
{
    WFAction *_action;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)actionRunningStateDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

