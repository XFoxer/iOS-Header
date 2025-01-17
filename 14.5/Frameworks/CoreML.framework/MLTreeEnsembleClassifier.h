//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLClassifier.h>

#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLSpecificationCompiler-Protocol.h>

@class NSArray, NSString;

@interface MLTreeEnsembleClassifier : MLClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler>
{
    shared_ptr_0841df90 _mmapped_model;
    vector_aab22ae2 _cached_model;
    unsigned long long num_dimensions;
    vector_5de6913e _classes_by_string;
    vector_bbba3654 _classes_by_int64_t;
    long long _class_type;
    NSArray *_class_values;
    NSString *_single_array_key;
}

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)_convertStringClassVector:(const vector_5de6913e *)arg1 int64ClassVector:(const vector_bbba3654 *)arg2 dimensions:(unsigned long long)arg3 toClassLabel:(id *)arg4 classType:(long long *)arg5 andReturnError:(id *)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_buildClassificationClasses:(double *)arg1 topk:(unsigned long long)arg2 error:(id *)arg3;
- (void)_setSingleArrayLookupField;
- (const char *)_model_data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

