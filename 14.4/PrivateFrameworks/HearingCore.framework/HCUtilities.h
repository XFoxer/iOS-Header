//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HCUtilities : NSObject
{
}

+ (_Bool)isProtectedDataAvailable;
+ (_Bool)deviceIsPhone;
+ (_Bool)supportsLEA2;
+ (_Bool)watchSupportsPairingHearingAids;
+ (_Bool)deviceHasHomeButton;
+ (_Bool)deviceIsPod;
+ (_Bool)deviceIsWatch;
+ (_Bool)deviceIsPad;
+ (_Bool)deviceIsBigPhone;
+ (_Bool)deviceIsSmallPhone;
+ (_Bool)deviceIsMultiUser;
+ (_Bool)currentProcessIsPreferences;
+ (_Bool)currentProcessIsHeard;
+ (_Bool)isInternalInstall;
+ (id)messagePayloadFromDictionary:(id)arg1 andIdentifier:(unsigned long long)arg2;

@end

