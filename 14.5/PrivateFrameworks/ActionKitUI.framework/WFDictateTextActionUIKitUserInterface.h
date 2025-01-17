//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/WFDictateTextActionUserInterface-Protocol.h>
#import <ActionKitUI/WFDictateTextActionViewDelegate-Protocol.h>

@class NSString, WFDictateTextActionView;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionUIKitUserInterface : WFActionUserInterface <WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface>
{
    WFDictateTextActionView *_actionView;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFDictateTextActionView *actionView; // @synthesize actionView=_actionView;
- (void)dictateTextActionViewDidTapStopButton:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)actionDidReceiveTranscription:(id)arg1;
- (void)actionDidBeginListening;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

