//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class OKClickWheelView;

@protocol OKClickWheelViewDelegate <NSObject>
- (void)clickWheelViewClosePressed:(OKClickWheelView *)arg1;
- (void)clickWheelViewMenuButtonPressed:(OKClickWheelView *)arg1;
- (_Bool)clickWheelViewShouldAppear;
- (void)clickWheelViewWillDisappear:(OKClickWheelView *)arg1;
- (void)clickWheelViewWillAppear:(OKClickWheelView *)arg1;
- (_Bool)shouldShowPlayIcon;
@end

