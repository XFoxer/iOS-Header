//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying>
{
    unsigned long long _iteration;
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedGradient;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    float _gradientL2norm;
    float _gradientScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatGradient;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedGradient;
    struct {
        unsigned int iteration:1;
        unsigned int timestamp:1;
        unsigned int gradientL2norm:1;
        unsigned int gradientScaleFactor:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient; // @synthesize denseQuantizedGradient=_denseQuantizedGradient;
@property(nonatomic) float gradientL2norm; // @synthesize gradientL2norm=_gradientL2norm;
@property(nonatomic) float gradientScaleFactor; // @synthesize gradientScaleFactor=_gradientScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient; // @synthesize sparseQuantizedGradient=_sparseQuantizedGradient;
@property(nonatomic) unsigned long long iteration; // @synthesize iteration=_iteration;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient; // @synthesize sparseFloatGradient=_sparseFloatGradient;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDenseQuantizedGradient;
@property(nonatomic) _Bool hasGradientL2norm;
@property(nonatomic) _Bool hasGradientScaleFactor;
@property(readonly, nonatomic) _Bool hasSparseQuantizedGradient;
@property(nonatomic) _Bool hasIteration;
@property(readonly, nonatomic) _Bool hasEvaluationMetrics;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasSparseFloatGradient;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;
- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)arg1;
- (_Bool)hasGradient;

@end

