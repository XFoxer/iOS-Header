//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "PKUITextInputPencilTextInput-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CKContextCompleter, NSArray, NSDictionary, NSMapTable, NSString, TopHitCompletionPromotionRecognizer, TopHitCompletionView, UIColor, UITextCursorAssertionController, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol CompletionItem, UITextCursorAssertion, UITextInputDelegate, UITextInputTokenizer, UnifiedFieldDelegate;

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate, PKUITextInputPencilTextInput>
{
    _Bool _lastEditWasADeletion;
    NSString *_pendingTopHitNavigationText;
    id <CompletionItem> _topHit;
    TopHitCompletionView *_topHitCompletionView;
    TopHitCompletionPromotionRecognizer *_topHitCompletionPromotionRecognizer;
    NSArray *_keyCommands;
    NSMapTable *_keyCommandActions;
    NSString *_userTypedText;
    UITextCursorAssertionController *_textCursorAssertionController;
    id <UITextCursorAssertion> _textCursorHiddenAssertion;
    _Bool _didInitializeMenuItems;
    _Bool _pastingText;
    _Bool _lastInputWasQuerySuggestion;
    _Bool _hasSelectedQuerySuggestion;
    _Bool _usingPencilInput;
    id <CompletionItem> _reflectedItem;
    NSArray *_querySuggestions;
    CKContextCompleter *_contextCompleter;
}

+ (_Bool)areSiriSuggestionsEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUsingPencilInput) _Bool usingPencilInput; // @synthesize usingPencilInput=_usingPencilInput;
@property(retain, nonatomic) CKContextCompleter *contextCompleter; // @synthesize contextCompleter=_contextCompleter;
@property(readonly, nonatomic) _Bool hasSelectedQuerySuggestion; // @synthesize hasSelectedQuerySuggestion=_hasSelectedQuerySuggestion;
@property(readonly, nonatomic) _Bool lastInputWasQuerySuggestion; // @synthesize lastInputWasQuerySuggestion=_lastInputWasQuerySuggestion;
@property(readonly, nonatomic) NSArray *querySuggestions; // @synthesize querySuggestions=_querySuggestions;
@property(readonly, nonatomic, getter=isPastingText) _Bool pastingText; // @synthesize pastingText=_pastingText;
@property(retain, nonatomic) id <CompletionItem> reflectedItem; // @synthesize reflectedItem=_reflectedItem;
- (void)willBeginPencilTextInputEditing;
- (_Bool)_allowsReflectedTopHit;
- (_Bool)_updateQuerySuggestionsMatchingText:(id)arg1;
- (void)updateQuerySuggestionsFromUserTypedText;
- (void)selectAll:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
- (void)_keyPressed:(id)arg1 forEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (void)clearUserTypedText;
- (void)focusAndInsertCursorAtEnd;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (struct CGRect)editRect;
@property(readonly, nonatomic) double placeholderHorizontalInset;
- (void)_layoutTopHitCompletionView;
- (void)topHitDidBecomeReady;
- (void)_setReflectedItem:(id)arg1 updateUserTypedPrefix:(_Bool)arg2;
- (void)_restoreUserTypedText;
- (void)_setTopHit:(id)arg1;
- (void)_promoteCompletionToSelection:(_Bool)arg1 andMoveForward:(_Bool)arg2;
- (void)_promoteCompletionToSelection;
- (void)_moveLeft;
- (void)_moveRight;
- (id)_reflectedItemCompletionString;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_removeTopHitCompletionView;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_textForPasteboard;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)_cancelPendingTopHitNavigation;
- (id)_topHitForCurrentText;
- (_Bool)_waitingForTopHitForCurrentText;
- (void)_textDidChangeFromTyping;
- (void)_updateReturnKey;
- (void)_endEditingWithCurrentText;
- (unsigned long long)_unifiedFieldInputType;
- (id)_textWithoutWhitespace;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
@property(copy, nonatomic) UIColor *placeholderColor;
- (_Bool)_hasContent;
- (void)pasteAndNavigate:(id)arg1;
- (void)_handlePasteboardChangedNotification:(id)arg1;
- (void)_updateMenuItems;
- (_Bool)supportsImagePaste;
- (void)paste:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UnifiedFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end

