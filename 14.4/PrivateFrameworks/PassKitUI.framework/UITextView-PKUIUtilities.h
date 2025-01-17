//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <PassKitUI/PKAppearanceObject-Protocol.h>

@class NSString;

@interface UITextView (PKUIUtilities) <PKAppearanceObject>
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (void)pkui_styleTextView:(id)arg1;
- (struct CGRect)pkui_textFrame;
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;
- (struct CGSize)pkui_textSizeThatFits:(struct CGSize)arg1;
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

