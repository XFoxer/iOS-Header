//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutAnimating-Protocol.h>

@class NSString, SBHIconEditingSettings;

@interface SBIconListViewDefaultAnimator : NSObject <SBIconListLayoutAnimating>
{
    SBHIconEditingSettings *_iconEditingSettings;
}

- (void).cxx_destruct;
- (void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(struct SBIconListLayoutAnimationParameters)arg3 alongsideAnimationBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

