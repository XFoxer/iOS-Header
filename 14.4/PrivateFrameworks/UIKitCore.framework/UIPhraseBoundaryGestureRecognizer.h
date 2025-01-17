//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIDelayedAction, UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer
{
    UIDelayedAction *_secondDelayTimer;
    _Bool _secondDelayElapsed;
    UIResponder<UITextInput> *_textInput;
    double _secondDelay;
    id _userData;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) _Bool secondDelayElapsed; // @synthesize secondDelayElapsed=_secondDelayElapsed;
@property(nonatomic) double secondDelay; // @synthesize secondDelay=_secondDelay;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)clearTimer;
- (void)startTimer;
- (void)secondDelayElapsed:(id)arg1;
- (void)setState:(long long)arg1;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

