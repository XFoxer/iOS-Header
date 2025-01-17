//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_serviceName;
    NSString *_bundleIdentifier;
    NSArray *_limitToProtocols;
    long long _action;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property long long action; // @synthesize action=_action;
@property(copy) NSArray *limitToProtocols; // @synthesize limitToProtocols=_limitToProtocols;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)isLimitedToUDP;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

