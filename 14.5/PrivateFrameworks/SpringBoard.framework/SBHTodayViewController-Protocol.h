//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHLegibility-Protocol.h>
#import <SpringBoard/SBIconLocationPresenting-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>

@class NSString, SBIcon, SBIconListView, SBIconView, UIScrollView;
@protocol BSInvalidatable, SBHTodayViewControllerObserver;

@protocol SBHTodayViewController <SBHLegibility, SBIconViewQuerying, SBIconLocationPresenting>
@property(readonly, nonatomic) SBIconListView *favoriteListView;
@property(readonly, nonatomic) SBIconListView *listView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)scrollIconToVisible:(SBIcon *)arg1 atPosition:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)noteIconViewWillZoomDown:(SBIconView *)arg1;
- (void)layoutIconListView:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)removeObserver:(id <SBHTodayViewControllerObserver>)arg1;
- (void)addObserver:(id <SBHTodayViewControllerObserver>)arg1;

@optional
- (id <BSInvalidatable>)keepIconImageViewControllersStaticForReason:(NSString *)arg1;
@end

