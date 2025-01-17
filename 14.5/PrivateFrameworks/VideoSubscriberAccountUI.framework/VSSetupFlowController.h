//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderRequestManagerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSRemoteNotifierDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSSupportedAppsViewControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, VSAccountSerializationCenter, VSAppDescription, VSDevice, VSIdentityProviderRequestManager, VSPersistentStorage, VSPreferences, VSRemoteNotifier;
@protocol VSSetupFlowControllerDelegate;

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate>
{
    _Bool _isInSTBMode;
    _Bool _signingIn;
    _Bool _notifyDelegateFromActivation;
    id <VSSetupFlowControllerDelegate> _delegate;
    VSPreferences *_preferences;
    VSPersistentStorage *_storage;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    NSArray *_freeOnBoardingBundleIDs;
    VSAppDescription *_appDescription;
    NSString *_providerAccountUsername;
    VSIdentityProviderRequestManager *_requestManager;
    CDUnknownBlockType _goingBackActivationCompletionBlock;
    VSDevice *_currentDevice;
    VSAccountSerializationCenter *_serializationCenter;
    NSArray *_supportedApps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *supportedApps; // @synthesize supportedApps=_supportedApps;
@property(retain, nonatomic) VSAccountSerializationCenter *serializationCenter; // @synthesize serializationCenter=_serializationCenter;
@property(retain, nonatomic) VSDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(copy, nonatomic) CDUnknownBlockType goingBackActivationCompletionBlock; // @synthesize goingBackActivationCompletionBlock=_goingBackActivationCompletionBlock;
@property(nonatomic) _Bool notifyDelegateFromActivation; // @synthesize notifyDelegateFromActivation=_notifyDelegateFromActivation;
@property(retain, nonatomic) VSIdentityProviderRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSString *providerAccountUsername; // @synthesize providerAccountUsername=_providerAccountUsername;
@property(retain, nonatomic) VSAppDescription *appDescription; // @synthesize appDescription=_appDescription;
@property(nonatomic, getter=isSigningIn) _Bool signingIn; // @synthesize signingIn=_signingIn;
@property(copy, nonatomic) NSArray *freeOnBoardingBundleIDs; // @synthesize freeOnBoardingBundleIDs=_freeOnBoardingBundleIDs;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool isInSTBMode; // @synthesize isInSTBMode=_isInSTBMode;
@property(nonatomic) __weak id <VSSetupFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)performDismissalOfIdentityProviderViewController:(id)arg1;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)startSilentSigningInForSTBFromActivation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_getProviderWithUserTokenFromAllProviders:(id)arg1;
- (void)showSupportedApps;
- (void)forceSignOutWithAccount:(id)arg1;
- (void)signOutForNotNowFlowWithIdentityProvider:(id)arg1;
- (void)notNowWithIdentityProvider:(id)arg1;
- (void)notNow;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)startSigningInForIdentityProvider:(id)arg1;
- (void)finishSTBSuccessFlowForProvider:(id)arg1;
- (void)startSigningIn;
- (void)_startLoadingAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)startLoadingWhenGoingBack:(_Bool)arg1 serializedAccountDataToImport:(id)arg2;
- (void)markSTBProviderAppForInstallation:(id)arg1 withAppPlacementPosition:(id)arg2;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(_Bool)arg5 arrivedViaNotNowButton:(_Bool)arg6 arrivedAfterSigningIn:(_Bool)arg7 goingBack:(_Bool)arg8;
- (void)_presentError:(id)arg1;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_finishAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2;
- (void)_dismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)_offerAuthenticationForSTBProvider:(id)arg1 msoAppDescription:(id)arg2 providerAccountUsername:(id)arg3;
- (void)_offerAuthenticationForProvider:(id)arg1 withSupportedAppsButton:(_Bool)arg2 msoAppDescription:(id)arg3;
- (void)_offerAuthenticationWithSupportedAppsButton:(_Bool)arg1;
- (void)_didStartLoading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

