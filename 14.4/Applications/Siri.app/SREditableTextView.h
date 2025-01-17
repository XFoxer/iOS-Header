//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRUtteranceCorrectionTextViewDelegate-Protocol.h"

@class NSString, SRSpeechRecognizedCorrectionTextView;
@protocol SREditableTextViewDelegate;

@interface SREditableTextView : UIView <SRUtteranceCorrectionTextViewDelegate>
{
    long long _presentationStyle;
    struct NSDirectionalEdgeInsets _edgeInsets;
    SRSpeechRecognizedCorrectionTextView *_textView;
    UIView *_backgroundView;
    double _topOffsetForTextView;
    double _heightOffsetForTextView;
    _Bool _editable;
    _Bool _didCorrect;
    id <SREditableTextViewDelegate> _delegate;
    long long _textAlignment;
}

+ (double)insertionAnimatedZPosition;
- (void).cxx_destruct;
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SREditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_createVisualEffectBackgroundViewForTextView:(id)arg1 topOffset:(double *)arg2;
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;
- (void)utteranceTextDidResignFirstResponder:(id)arg1;
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;
- (double)_indentWidth;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_adjustLineSpacing;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (void)beginEditing;
- (void)_requestKeyboardFocusAndBecomeFirstResponder;
- (void)_handleTap:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;
- (double)firstLineBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect)arg1 presentationStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

