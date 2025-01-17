//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSMutableArray, TASPAdvertisement;

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>
{
    _Bool _hasSurfacedNotification;
    NSData *_address;
    unsigned long long _state;
    unsigned long long _type;
    NSDate *_creationDate;
    TASPAdvertisement *_latestAdvertisement;
    double _keepAliveInterval;
    NSMutableArray *_stagedDetectionResults;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stagedDetectionResults; // @synthesize stagedDetectionResults=_stagedDetectionResults;
@property(nonatomic) double keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(nonatomic) _Bool hasSurfacedNotification; // @synthesize hasSurfacedNotification=_hasSurfacedNotification;
@property(readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // @synthesize latestAdvertisement=_latestAdvertisement;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *address; // @synthesize address=_address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)descriptionDictionary;
- (_Bool)isEqual:(id)arg1;
- (void)mergeWithAnotherSingleDeviceRecord:(id)arg1;
- (void)updateLatestAdvertisement:(id)arg1;
- (id)getDetectionsReadyToPush;
- (void)purgeStagedDetectionsWithClock:(id)arg1;
- (_Bool)_shouldPushStagedDetection:(id)arg1;
@property(readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
- (void)clearAllStagedDetections;
- (id)getStagedDetections;
- (void)stageDetection:(id)arg1;
- (id)initWithDeviceAddress:(id)arg1 state:(unsigned long long)arg2 type:(unsigned long long)arg3 date:(id)arg4 keepAliveInterval:(double)arg5;

@end

