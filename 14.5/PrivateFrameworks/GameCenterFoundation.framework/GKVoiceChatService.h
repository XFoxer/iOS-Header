//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject
{
    id _voiceChatService;
}

+ (_Bool)isVoIPAllowed;
+ (id)defaultVoiceChatService;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id voiceChatService; // @synthesize voiceChatService=_voiceChatService;
@property(readonly) float inputMeterLevel;
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property(nonatomic) float remoteParticipantVolume;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)denyCallID:(long long)arg1;
- (_Bool)acceptCallID:(long long)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
@property id <GKVoiceChatClient> client;

@end

