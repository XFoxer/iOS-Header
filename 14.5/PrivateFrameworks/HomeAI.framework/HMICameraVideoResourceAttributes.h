//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSDate, NSString;

@interface HMICameraVideoResourceAttributes : HMFObject <HMFLogging>
{
    NSDate *_creationDate;
    unsigned long long _lastSequenceNumber;
    unsigned long long _firstSequenceNumber;
    double _nominalFrameRate;
    struct CGSize _dimensions;
    CDStruct_1b6d18a9 _assetDuration;
    CDStruct_1b6d18a9 _baseDecodeTimeStamp;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) CDStruct_1b6d18a9 baseDecodeTimeStamp; // @synthesize baseDecodeTimeStamp=_baseDecodeTimeStamp;
@property(readonly) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(readonly) double nominalFrameRate; // @synthesize nominalFrameRate=_nominalFrameRate;
@property(readonly) unsigned long long firstSequenceNumber; // @synthesize firstSequenceNumber=_firstSequenceNumber;
@property(readonly) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) CDStruct_1b6d18a9 assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAssetData:(id)arg1 error:(id *)arg2;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 nominalFrameRate:(double)arg5 dimensions:(struct CGSize)arg6 baseDecodeTimeStamp:(CDStruct_1b6d18a9)arg7;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

