//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKRecents : NSObject
{
}

+ (_Bool)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)crRecentsDomainCalendarString;
+ (id)crAddressKindPhoneNumberString;
+ (id)crAddressKindEmailString;
+ (Class)crRecentContactsLibraryClass;

@end

