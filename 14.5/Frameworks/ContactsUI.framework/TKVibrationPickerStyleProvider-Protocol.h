//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIColor, UIFont, UIView;

@protocol TKVibrationPickerStyleProvider <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;
- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;

@optional
@property(readonly, nonatomic) _Bool vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
@end

