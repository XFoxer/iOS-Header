//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXBorder, SXComponentMask, SXComponentShadow, SXDataTableStyle, SXFill, UIColor;

@protocol SXComponentStyleProperties <NSObject>
@property(readonly, nonatomic) SXComponentMask *mask;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) SXDataTableStyle *tableStyle;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) SXBorder *border;
@property(readonly, nonatomic) SXComponentShadow *shadow;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SXFill *fill;
@end

