//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoAdStateProviding-Protocol.h>
#import <Silex/SXVideoAdStateReporting-Protocol.h>

@class NFStateMachine, NSString;

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting>
{
    CDUnknownBlockType onPlayBlock;
    CDUnknownBlockType onPauseBlock;
    CDUnknownBlockType onResumeBlock;
    CDUnknownBlockType onFinishBlock;
    CDUnknownBlockType onFailBlock;
    CDUnknownBlockType onLearnMoreBlock;
    CDUnknownBlockType onSkipBlock;
    NFStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic, setter=onSkip:) CDUnknownBlockType onSkipBlock; // @synthesize onSkipBlock;
@property(copy, nonatomic, setter=onLearnMore:) CDUnknownBlockType onLearnMoreBlock; // @synthesize onLearnMoreBlock;
@property(copy, nonatomic, setter=onFail:) CDUnknownBlockType onFailBlock; // @synthesize onFailBlock;
@property(copy, nonatomic, setter=onFinish:) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock;
@property(copy, nonatomic, setter=onResume:) CDUnknownBlockType onResumeBlock; // @synthesize onResumeBlock;
@property(copy, nonatomic, setter=onPause:) CDUnknownBlockType onPauseBlock; // @synthesize onPauseBlock;
@property(copy, nonatomic, setter=onPlay:) CDUnknownBlockType onPlayBlock; // @synthesize onPlayBlock;
- (void)skip;
- (void)learnMore;
- (void)failWithError:(id)arg1;
- (void)finish;
- (void)resume;
- (void)pause;
- (void)play;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

