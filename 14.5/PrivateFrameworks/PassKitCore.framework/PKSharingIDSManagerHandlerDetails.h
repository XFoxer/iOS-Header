//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccountUser, PKFamilyMember;

@interface PKSharingIDSManagerHandlerDetails : NSObject
{
    PKFamilyMember *_familyMember;
    PKAccountUser *_accountUser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)description;
- (id)addressableHandles;
- (id)primaryAppleID;
- (id)initWithFamilyMember:(id)arg1 accountUser:(id)arg2;
- (id)initWithFamilyMember:(id)arg1;

@end

