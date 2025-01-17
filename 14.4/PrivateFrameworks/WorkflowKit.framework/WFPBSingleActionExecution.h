//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface WFPBSingleActionExecution : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;
    NSMutableArray *_inputs;
    NSMutableArray *_processedParameters;
    NSData *_serializedParameters;
    NSMutableArray *_variables;
}

+ (Class)inputType;
+ (Class)processedParametersType;
+ (Class)variablesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *inputs; // @synthesize inputs=_inputs;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSMutableArray *processedParameters; // @synthesize processedParameters=_processedParameters;
@property(retain, nonatomic) NSMutableArray *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)inputAtIndex:(unsigned long long)arg1;
- (unsigned long long)inputsCount;
- (void)addInput:(id)arg1;
- (void)clearInputs;
@property(readonly, nonatomic) _Bool hasSerializedParameters;
- (id)processedParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)processedParametersCount;
- (void)addProcessedParameters:(id)arg1;
- (void)clearProcessedParameters;
- (id)variablesAtIndex:(unsigned long long)arg1;
- (unsigned long long)variablesCount;
- (void)addVariables:(id)arg1;
- (void)clearVariables;

@end

