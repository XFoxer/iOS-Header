//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CollectionPickerViewControllerDelegate-Protocol.h"

@class CollectionPickerViewController, CollectionSaveSession, NSString, UIAlertController, UIView, UIViewController;
@protocol CollectionPickerDelegate;

__attribute__((visibility("hidden")))
@interface CollectionPicker : NSObject <CollectionPickerViewControllerDelegate>
{
    CollectionPickerViewController *_pickerViewController;
    UIAlertController *_alertController;
    UIView *_sourceView;
    struct CGRect _sourceRect;
    _Bool _shouldShowValidation;
    id <CollectionPickerDelegate> _delegate;
    CollectionSaveSession *_editSession;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowValidation; // @synthesize shouldShowValidation=_shouldShowValidation;
@property(retain, nonatomic) CollectionSaveSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic) __weak id <CollectionPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionPickerViewController:(id)arg1 unselectCollection:(id)arg2;
- (void)collectionPickerViewController:(id)arg1 selectCollection:(id)arg2;
- (void)cleanControllers;
@property(readonly, nonatomic) UIViewController *viewController;
- (id)initWithCollectionEditSession:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

