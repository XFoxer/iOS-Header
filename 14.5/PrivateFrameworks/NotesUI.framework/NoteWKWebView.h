//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView
{
    NoteHTMLEditorView *_noteHTMLEditorView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
- (void)ic_evaluateJavaScript:(id)arg1;
- (void)paste:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;

@end

