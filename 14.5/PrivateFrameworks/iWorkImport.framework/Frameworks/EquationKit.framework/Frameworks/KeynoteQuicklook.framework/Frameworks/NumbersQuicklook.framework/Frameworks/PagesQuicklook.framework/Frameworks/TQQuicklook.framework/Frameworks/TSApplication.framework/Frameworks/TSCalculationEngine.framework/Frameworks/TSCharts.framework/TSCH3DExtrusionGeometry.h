//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DGeometry.h>

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry
{
    vector_d73af98f _crossSection;
    vector_7200ab52 _spine;
    vector_d73af98f _scale;
    _Bool _beginCap;
    _Bool _endCap;
    float _crossSectionCreaseAngle;
    float _spineCreaseAngle;
    unsigned int _endCapOffset;
    unsigned int _endCapCount;
    unsigned int _beginCapOffset;
    int _beginCapCount;
    tvec3_17f03ce0 _normalBias;
    tvec3_17f03ce0 _spineDirectionBias;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) tvec3_17f03ce0 spineDirectionBias; // @synthesize spineDirectionBias=_spineDirectionBias;
@property(readonly, nonatomic) unsigned int capCount; // @synthesize capCount=_endCapCount;
@property(readonly, nonatomic) unsigned int capOffset; // @synthesize capOffset=_endCapOffset;
@property(nonatomic) tvec3_17f03ce0 normalBias; // @synthesize normalBias=_normalBias;
@property(nonatomic) float spineCreaseAngle; // @synthesize spineCreaseAngle=_spineCreaseAngle;
@property(nonatomic) float crossSectionCreaseAngle; // @synthesize crossSectionCreaseAngle=_crossSectionCreaseAngle;
@property(nonatomic) _Bool endCap; // @synthesize endCap=_endCap;
@property(nonatomic) _Bool beginCap; // @synthesize beginCap=_beginCap;
- (void)debug_dumpGeometryBounds;
- (void)generateArrays;
- (const vector_d73af98f *)scale;
- (void)setScale:(const vector_d73af98f *)arg1;
- (const vector_7200ab52 *)spine;
- (void)setSpine:(const vector_7200ab52 *)arg1;
- (const vector_d73af98f *)crossSection;
- (void)setCrossSection:(const vector_d73af98f *)arg1;
- (id)init;

@end

