//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelImageprint.h>

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint
{
    VNFaceprint *_faceprint;
    VNTorsoprint *_torsoprint;
}

+ (unsigned long long)currentSerializationVersion;
+ (_Bool)supportsSecureCoding;
+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (id)currentVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) VNTorsoprint *torsoprint; // @synthesize torsoprint=_torsoprint;
@property(readonly, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;
- (unsigned long long)serializedLength;
- (id)serializeStateAndReturnError:(id *)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;
@property(readonly, nonatomic, getter=isValidTorsoprint) _Bool validTorsoprint;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 validTorsoprint:(_Bool)arg6 requestRevision:(unsigned long long)arg7;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;

@end

