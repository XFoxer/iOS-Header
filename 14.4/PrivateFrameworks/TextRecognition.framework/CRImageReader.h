//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol CREngine;

@interface CRImageReader : NSObject
{
    NSArray *_outputObjectTypes;
    _Bool _shouldCancel;
    NSDictionary *_userOptions;
    NSObject<CREngine> *_engine;
}

+ (id)_engineFromOptions:(id)arg1 error:(id *)arg2;
+ (Class)_engineClassFromOptions:(id)arg1 error:(id *)arg2;
+ (id)descriptionForErrorCode:(long long)arg1;
+ (id)defaultOptions;
+ (id)errorWithErrorCode:(long long)arg1;
+ (id)languageSetFromOptionsDictionary:(id)arg1;
+ (unsigned long long)defaultRevisionNumber;
+ (id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<CREngine> *engine; // @synthesize engine=_engine;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
- (id)detectorInferenceStats;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)recognizerStats;
- (id)postProcStats;
- (id)detectorStats;
- (void)cancel;
- (id)textResultsForImage:(id)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;
- (id)signpostLog;
- (id)textDetectorResultsForImage:(id)arg1 error:(id *)arg2;
- (id)textRecognizerResultsForTextFeatures:(id)arg1 forImageAtURL:(id)arg2 options:(id)arg3;
- (id)textRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3;
- (id)textResultsForImage:(id)arg1 options:(id)arg2 withProgressHandler:(CDUnknownBlockType)arg3;
- (id)textResultsForImage:(id)arg1 options:(id)arg2;
- (id)textResultsForImageAtURL:(id)arg1 options:(id)arg2;
- (id)confidenceThresholdProvider;
- (_Bool)purgeCaches:(id)arg1;
- (struct CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize)arg2;
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
@property(copy) NSArray *outputObjectTypes;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1;

@end

