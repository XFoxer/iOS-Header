//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPopoverPresentationController.h>

__attribute__((visibility("hidden")))
@interface _UISharingViewPresentationController : UIPopoverPresentationController
{
    _Bool _suppressDismissalHandlerUnlessDimmingViewTapped;
    CDUnknownBlockType _dismissalHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suppressDismissalHandlerUnlessDimmingViewTapped; // @synthesize suppressDismissalHandlerUnlessDimmingViewTapped=_suppressDismissalHandlerUnlessDimmingViewTapped;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;

@end

