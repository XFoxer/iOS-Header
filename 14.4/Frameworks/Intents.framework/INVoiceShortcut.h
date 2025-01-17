//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INShortcut, NSString, NSUUID;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    NSString *_invocationPhrase;
    INShortcut *_shortcut;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) NSString *invocationPhrase; // @synthesize invocationPhrase=_invocationPhrase;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_initWithVCVoiceShortcut:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3;
- (id)userActivity;
- (id)intent;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithIntent:(id)arg1;

@end

