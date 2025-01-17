//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VCSymptomReporter : NSObject
{
    unsigned int _callID;
    NSString *_loggingDirectory;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    CDUnknownFunctionPointerType _symptomReporterCallback;
    id _symptomReporterContext;
}

@property(copy, nonatomic) NSString *loggingDirectory; // @synthesize loggingDirectory=_loggingDirectory;
- (id)symptomNameWithDomain:(id)arg1 subtypeContext:(id)arg2;
- (int)reportSymptomWithOptions:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4;
- (int)reportSymptomWithDictionary:(id)arg1;
- (int)reportSymptomWithIDSDestination:(id)arg1 sessionID:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5;
- (int)reportSymptomWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 actions:(id)arg4;
- (int)reportInactiveSlotsInChannelSequence;
- (int)reportInvalidTransportType;
- (int)reportUnexpectedHighRTT;
- (int)reportHighTargetQueueSize;
- (int)reportHighConsecutiveAudioErasures;
- (int)reportMediaQueueFlushingTooFrequent;
- (int)reportMediaQueueOvershoot;
- (int)reportKeyFrameNotSpreading;
- (int)reportUnexpectedLowTargetBitrate;
- (int)reportTargetBitrateOvershoot;
- (int)reportMediaQueuePoolEmpty;
- (int)reportKeyIndexNotReceived;
- (int)reportSessionInfoErrorResponse;
- (int)reportCCReliableDataNotReceived;
- (int)reportReceiveSessionStatsFailed;
- (int)reportQRATKNTokenError;
- (int)reportIDSDataChannelEventUsageError;
- (int)reportAUIOTimestampJumped;
- (int)reportNegativeJitterBufferSize;
- (int)reportAudioErasures;
- (int)reportVideoStall;
- (int)reportAudioStall;
- (int)reportNoPacketsWithOptionalDictionary:(id)arg1;
- (int)reportNoFirstFrameWithOptionalDictionary:(id)arg1;
- (int)reportFailedToStartVideo;
- (int)reportFailedToStartAudio;
- (int)reportNoSNATMAPResponseWithOptionalDictionary:(id)arg1;
- (int)reportNoRelayResponseWithOptionalDictionary:(id)arg1;
- (int)reportConnectionTimeout;
- (int)reportSignalingFailed;
- (int)reportNoMediaBlob;
- (int)reportBandwidthEstimationMismatch;
- (int)reportRateTargetMismatch;
- (void)reportSymptomInternal:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (void)dealloc;
- (void)VCSymptomReporterSetCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)reportSymptom:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1;

@end

