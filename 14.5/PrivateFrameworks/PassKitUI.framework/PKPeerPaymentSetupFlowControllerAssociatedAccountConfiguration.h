//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPeerPaymentSetupFlowControllerConfiguration-Protocol.h>

@class NSString, PKFamilyMember, PKPeerPaymentPreferences;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>
{
    NSString *_firstName;
    NSString *_lastName;
    PKFamilyMember *_familyMember;
    PKPeerPaymentPreferences *_updatedPreferences;
    long long _setupType;
    id <PKPeerPaymentAssociatedAccountSetupDelegate> _associatedAccountSetupDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PKPeerPaymentAssociatedAccountSetupDelegate> associatedAccountSetupDelegate; // @synthesize associatedAccountSetupDelegate=_associatedAccountSetupDelegate;
@property(readonly, nonatomic) long long setupType; // @synthesize setupType=_setupType;
@property(retain, nonatomic) PKPeerPaymentPreferences *updatedPreferences; // @synthesize updatedPreferences=_updatedPreferences;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)peerPaymentSetupConfigurationType;
- (id)initWithFamilyMember:(id)arg1 associatedAccountSetupDelegate:(id)arg2 setupType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

