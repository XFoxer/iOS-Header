//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUndoTextOperation.h>

@class _NSAttributeRun;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationSetAttributes : _UIUndoTextOperation
{
    _NSAttributeRun *_attributes;
}

- (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;

@end

