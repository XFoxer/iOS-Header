//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBPolygon : NSObject
{
    NSMutableArray *_mutablePoints;
    NSMutableArray *_weights;
    struct CGPoint _centroid;
    struct CGPoint _weightedCentroid;
}

+ (id)_sortPoints:(id)arg1;
+ (struct CGPoint)_pointAtIndex:(unsigned long long)arg1 ofPointArray:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=_weightedCentroid;
@property(retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // @synthesize weights=_weights;
@property(nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
- (double)_meanRadius;
- (double)_meanFingertipRowAngle;
- (double)_baseOrientation;
- (void)_translate:(struct CGPoint)arg1;
- (void)_rotate:(double)arg1;
- (void)_scale:(double)arg1;
- (void)_flipHorizontally;
- (void)_applyTransform:(struct CGAffineTransform)arg1;
- (unsigned long long)_thumbIndex;
- (_Bool)_isLeftHanded;
- (void)_updateWeightedCentroid;
- (void)_updateWeights;
- (void)_updateCentroid;
- (void)_updateProperties;
- (double)_weightAtIndex:(unsigned long long)arg1;
- (struct CGPoint)_pointAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_perimeter) double perimeter;
- (_Bool)isEqual:(id)arg1;
- (void)enumeratePointsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double distanceOfFarthestPointFromCentroid;
@property(readonly, nonatomic) unsigned long long pointCount;
- (id)points;
- (id)description;
- (id)initWithPoints:(id)arg1;
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;

@end

