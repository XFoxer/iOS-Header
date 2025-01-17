//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry
{
    double _torusringRadius;
    double _toruspipeRadius;
    double _torusradialSpan;
    long long _torusringSegmentCount;
    long long _toruspipeSegmentCount;
    long long _torusprimitiveType;
}

+ (_Bool)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long ringSegmentCount;
@property(nonatomic) double ringRadius;
- (void)setRadialSpan:(double)arg1;
- (double)radialSpan;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) long long pipeSegmentCount;
@property(nonatomic) double pipeRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationTorus;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end

