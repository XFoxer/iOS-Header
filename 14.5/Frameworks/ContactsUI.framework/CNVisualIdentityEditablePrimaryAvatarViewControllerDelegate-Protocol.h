//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerProviderItem, CNVisualIdentityEditablePrimaryAvatarViewController;

@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate <NSObject>
- (void)editableAvatarViewController:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1 didUpdateWithProviderItem:(CNPhotoPickerProviderItem *)arg2;

@optional
- (void)editableAvatarViewControllerDidEndEditing:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1;
- (_Bool)editableAvatarViewControllerShouldBecomeFirstResponder:(CNVisualIdentityEditablePrimaryAvatarViewController *)arg1;
@end

