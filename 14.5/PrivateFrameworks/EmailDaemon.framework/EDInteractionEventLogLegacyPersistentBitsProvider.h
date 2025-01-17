//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSString;

@interface EDInteractionEventLogLegacyPersistentBitsProvider : NSObject <EFLoggable>
{
}

+ (id)log;
- (id)_queryKeychainError:(out id *)arg1;
- (id)_findExistingSaltError:(out id *)arg1;
- (id)_oldSalt;
- (id)_persistentBits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

