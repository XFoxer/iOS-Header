//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLClassifier.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSMutableArray, NSString;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader>
{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    NSMutableArray *classLabels;
    long long classType;
    int postEvalTransForm;
    int classEncoding;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classify:(id)arg1 topK:(unsigned long long)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)calculateClassProbability:(double *)arg1 input:(id)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 error:(id *)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

