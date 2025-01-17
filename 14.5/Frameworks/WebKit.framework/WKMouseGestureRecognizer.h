//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIHoverGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer
{
    struct RetainPtr<UIEvent> _currentHoverEvent;
    struct RetainPtr<UITouch> _currentTouch;
    _Bool _touching;
    unique_ptr_f5c9497a _lastEvent;
    Optional_f704b8f6 _lastLocation;
    struct Optional<long> _pressedButtonMask;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (unique_ptr_f5c9497a)createMouseEventWithType:(int)arg1;
- (_Bool)_shouldReceivePress:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (void)reset;
- (id)mouseTouch;
- (Optional_f704b8f6)lastMouseLocation;
- (struct NativeWebMouseEvent *)lastMouseEvent;
- (void)setEnabled:(_Bool)arg1;

@end

