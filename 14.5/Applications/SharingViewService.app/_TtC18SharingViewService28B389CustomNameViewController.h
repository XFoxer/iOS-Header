//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC18SharingViewService28B389CustomNameViewController : PRXCardContentViewController <UITextFieldDelegate>
{
    MISSING_TYPE *mainController;
    MISSING_TYPE *customNameTextField;
    MISSING_TYPE *hiddenEmojiTextField;
    MISSING_TYPE *emojiButton;
    MISSING_TYPE *continueAction;
    MISSING_TYPE *containsEmojiError;
    MISSING_TYPE *tappedEmojiButton;
}

- (void).cxx_destruct;
- (id)initWithContentView:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)updateElementsIfNecessary;
- (void)emojiButtonPressed:(id)arg1;

@end

