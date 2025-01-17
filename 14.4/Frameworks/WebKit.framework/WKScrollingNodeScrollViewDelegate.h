//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate>
{
    struct ScrollingTreeScrollingNodeDelegateIOS *_scrollingTreeNodeDelegate;
    _Bool _inUserInteraction;
}

@property(nonatomic, getter=_isInUserInteraction) _Bool inUserInteraction; // @synthesize inUserInteraction=_inUserInteraction;
- (void)cancelPointersForGestureRecognizer:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_actingParentScrollViewForScrollView:(id)arg1;
- (id)initWithScrollingTreeNodeDelegate:(struct ScrollingTreeScrollingNodeDelegateIOS *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

