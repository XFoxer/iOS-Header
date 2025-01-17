//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableArray;

@interface HMDCameraAccessorySettingsConfiguration : HMFObject
{
    _Bool _isRecordingCapable;
    _Bool _isRecordingEnabled;
    _Bool _isRecordingAudioEnabled;
    _Bool _inclusionZone;
    _Bool _smartBulletinBoardNotificationEnabled;
    _Bool _reachabilityNotificationEnabled;
    unsigned long long _recordingEventTriggers;
    unsigned long long _numActivityZones;
    NSMutableArray *_numPointsInActivityZones;
}

- (void).cxx_destruct;
@property(readonly) _Bool reachabilityNotificationEnabled; // @synthesize reachabilityNotificationEnabled=_reachabilityNotificationEnabled;
@property(readonly) _Bool smartBulletinBoardNotificationEnabled; // @synthesize smartBulletinBoardNotificationEnabled=_smartBulletinBoardNotificationEnabled;
@property(readonly) _Bool inclusionZone; // @synthesize inclusionZone=_inclusionZone;
@property(retain, nonatomic) NSMutableArray *numPointsInActivityZones; // @synthesize numPointsInActivityZones=_numPointsInActivityZones;
@property(readonly) unsigned long long numActivityZones; // @synthesize numActivityZones=_numActivityZones;
@property(readonly) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
@property(readonly) _Bool isRecordingAudioEnabled; // @synthesize isRecordingAudioEnabled=_isRecordingAudioEnabled;
@property(readonly) _Bool isRecordingEnabled; // @synthesize isRecordingEnabled=_isRecordingEnabled;
@property(readonly) _Bool isRecordingCapable; // @synthesize isRecordingCapable=_isRecordingCapable;
- (id)initWithCameraAccessory:(id)arg1;

@end

