//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>

@interface VCCapabilities : NSObject <NSCoding>
{
    _Bool isAudioEnabled;
    _Bool isAudioPausedToStart;
    _Bool isVideoEnabled;
    _Bool isVideoPausedToStart;
    _Bool isVideoSourceScreen;
    _Bool isDuplexAudioOnly;
    _Bool isDuplexVideoOnly;
    _Bool isHalfDuplexAudio;
    _Bool isKeyExchangeEnabled;
    _Bool isRelayEnabled;
    _Bool isRelayForced;
    _Bool requiresWifi;
    _Bool isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
    int deviceRole;
}

+ (id)screenSharingVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)DataOnlyVCCapabilities;
@property _Bool isHalfDuplexAudio; // @synthesize isHalfDuplexAudio;
@property int deviceRole; // @synthesize deviceRole;
@property _Bool isDTLSEnabled; // @synthesize isDTLSEnabled;
@property _Bool requiresWifi; // @synthesize requiresWifi;
@property _Bool isRelayForced; // @synthesize isRelayForced;
@property _Bool isRelayEnabled; // @synthesize isRelayEnabled;
@property _Bool isVideoPausedToStart; // @synthesize isVideoPausedToStart;
@property _Bool isAudioPausedToStart; // @synthesize isAudioPausedToStart;
@property unsigned int actualVideoCodec; // @synthesize actualVideoCodec;
@property unsigned int preferredVideoCodec; // @synthesize preferredVideoCodec;
@property unsigned int actualAudioCodec; // @synthesize actualAudioCodec;
@property unsigned int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property _Bool isKeyExchangeEnabled; // @synthesize isKeyExchangeEnabled;
@property _Bool isDuplexAudioOnly; // @synthesize isDuplexAudioOnly;
@property _Bool isDuplexVideoOnly; // @synthesize isDuplexVideoOnly;
@property _Bool isVideoSourceScreen; // @synthesize isVideoSourceScreen;
@property _Bool isVideoEnabled; // @synthesize isVideoEnabled;
@property _Bool isAudioEnabled; // @synthesize isAudioEnabled;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)newEncodedDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)init;

@end

