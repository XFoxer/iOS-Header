//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIPanGestureRecognizer;
@protocol WFDrawerDragTracking;

@interface WFDrawerDismissalPanMediator : NSObject
{
    UIPanGestureRecognizer *_gestureRecognizer;
    id <WFDrawerDragTracking> _dragTracker;
    CADisplayLink *_displayLink;
    double _translation;
    double _previousVelocity;
    double _peakVelocity;
}

- (void).cxx_destruct;
- (void)handleDisplayLink:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2;

@end

