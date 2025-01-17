//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/AKTapToSignInViewControllerDelegate-Protocol.h>

@class AKTapToSignInViewController, NSString, OBPrivacyLinkController;

@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate>
{
    CDUnknownBlockType _completionBlock;
    AKTapToSignInViewController *_akSignInVC;
    OBPrivacyLinkController *_privacyLinkController;
}

+ (id)_inProgressRegisteringNonPhoneAccount;
+ (_Bool)_shouldShowAuthKitSignIn;
+ (_Bool)shouldShowRegistration;
- (void).cxx_destruct;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(retain, nonatomic) AKTapToSignInViewController *akSignInVC; // @synthesize akSignInVC=_akSignInVC;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)canBecomeFirstResponder;
- (void)setErrorPresentationViewController:(id)arg1;
- (void)_handleRegistrarCompletion:(_Bool)arg1 errorAlertController:(id)arg2;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)updateInsetsForKeyboardFrame:(struct CGRect)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)accountRegistrar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

