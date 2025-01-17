//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class NSMutableDictionary, _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector : VNDetector
{
    unsigned long long _model;
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;
    struct unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer>> _imageAnalyzer;
    struct unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>>> _imageAnalyzerJunkCustomClassifiers;
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    struct unordered_map<unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifiers;
    struct unordered_map<unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _potentialLandmarkCustomClassifiers;
    struct unordered_map<unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiers;
    struct unordered_map<unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _significantEventCustomClassifiers;
    vector_90dce352 _cachedAllSceneClassificationsFromLastAnalysis;
    NSMutableDictionary *_cachedSaliencyHeatmapBoundingBoxGenerators;
}

+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (id)blacklistForModel:(unsigned long long)arg1;
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 detectionLevel:(unsigned long long)arg3;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allSignificantEventClassificationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziClassificationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)arg1 error:(id *)arg2;
- (id)allJunkClassificationObservationsForOptions:(id)arg1 error:(id *)arg2;
- (id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)allKnownSceneClassificationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)supportedImageSizeSetForProcessingOptions:(id)arg1;
@property(readonly) _Bool hasObjDetNet;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (_Bool)_getLeafSceneObservations:(id *)arg1 hierarchySceneObservations:(id *)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (id)_observationsForScene:(_Bool)arg1 junk:(_Bool)arg2 VNVYvzEtX1JlUdu8xx5qhDI:(_Bool)arg3 landmark:(_Bool)arg4 sceneprint:(_Bool)arg5 includingLabelsAndConfidences:(_Bool)arg6 compressedSceneprint:(_Bool)arg7 aesthetics:(_Bool)arg8 saliencyAHeatMap:(_Bool)arg9 saliencyOHeatMap:(_Bool)arg10 recognizedObjects:(_Bool)arg11 VN5kJNH3eYuyaLxNpZr5Z7zi:(_Bool)arg12 VNdGg5skzXHSAENO6T3enHE:(_Bool)arg13 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg14 withOptions:(id)arg15 originalImageSize:(struct CGSize)arg16 regionOfInterest:(struct CGRect)arg17 warningRecorder:(id)arg18 error:(id *)arg19;
- (id)_observationsForTopN:(const unsigned long long *)arg1 sceneClassificationsInMap:(const unordered_map_60ce8aba *)arg2 withMinimumConfidence:(float)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (id)_observationsForTopN:(const unsigned long long *)arg1 lastAnalysisSceneLabelsWithMinimumConfidence:(float)arg2 excludeObfuscatedLabels:(_Bool)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (vector_90dce352 *)_lastAnalysisSceneClassifications;
- (_Bool)_performAnalysis:(unsigned int)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_observationsForObjectsRecognizedInLastAnalysisWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (id)_saliencyOObservationsForLastAnalysisWithRegionOfInterest:(struct CGRect)arg1 originalImageSize:(struct CGSize)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (id)_saliencyAObservationsForLastAnalysisWithRegionOfInterest:(struct CGRect)arg1 originalImageSize:(struct CGSize)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (id)_saliencyObservationsForTensor:(const struct ImageAnalyzer_Tensor2D *)arg1 regionOfInterest:(struct CGRect)arg2 originalImageSize:(struct CGSize)arg3 options:(id)arg4 saliencyRequestRevisionKey:(id)arg5 saliencyGeneratorType:(id)arg6 startCode:(unsigned int)arg7 finishCode:(unsigned int)arg8 warningRecorder:(id)arg9 error:(id *)arg10;
- (id)_saliencyGeneratorOfType:(id)arg1 forSession:(id)arg2 error:(id *)arg3;
- (id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (id)_sceneprintObservationsForLastAnalysisOfSceneprint:(_Bool)arg1 includingLabelsAndConfidencesInSceneprint:(_Bool)arg2 compressedSceneprint:(_Bool)arg3 options:(id)arg4 error:(id *)arg5;
- (struct ImageAnalyzer_PCA *)_sceneprintCompressorForCompression:(unsigned long long)arg1 error:(id *)arg2;
- (id)_VNdGg5skzXHSAENO6T3enHEObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_74bdb789)_VNdGg5skzXHSAENO6T3enHECustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_74bdb789)_VNdGg5skzXHSAENO6T3enHELoadCustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_VN5kJNH3eYuyaLxNpZr5Z7ziObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_74bdb789)_VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_74bdb789)_VN5kJNH3eYuyaLxNpZr5Z7ziLoadCustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_potentialLandmarkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_74bdb789)_potentialLandmarksCustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_74bdb789)_loadPotentialLandmarksCustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_VNVYvzEtX1JlUdu8xx5qhDIObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_74bdb789)_VNVYvzEtX1JlUdu8xx5qhDICustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_74bdb789)_VNVYvzEtX1JlUdu8xx5qhDILoadCustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_6ef80be1)_junkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_6ef80be1)_loadJunkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_74bdb789)_loadCustomClassifierWithModelName:(id)arg1 labelsFileName:(id)arg2 classifierName:(id)arg3 inputBlobName:(id)arg4 outputBlobName:(id)arg5 espressoEngine:(int)arg6 espressoPlanFlags:(int)arg7 espressoStorageType:(int)arg8 espressoDeviceID:(int)arg9 error:(id *)arg10;
- (id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id *)arg4;
- (unsigned int)_analysisTypeForScene:(_Bool)arg1 junk:(_Bool)arg2 VNVYvzEtX1JlUdu8xx5qhDI:(_Bool)arg3 landmark:(_Bool)arg4 sceneprint:(_Bool)arg5 includingLabelsAndConfidences:(_Bool)arg6 compressedSceneprint:(_Bool)arg7 aesthetics:(_Bool)arg8 saliencyAHeatMap:(_Bool)arg9 saliencyOHeatMap:(_Bool)arg10 recognizedObjects:(_Bool)arg11 VN5kJNH3eYuyaLxNpZr5Z7zi:(_Bool)arg12 VNdGg5skzXHSAENO6T3enHE:(_Bool)arg13;
- (void)_tileRect:(struct CGRect)arg1 horizontally:(_Bool)arg2 vertically:(_Bool)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (void)_getImageCropAndScaleOption:(unsigned long long *)arg1 networkRequiredInputImageSize:(struct _Geometry2D_size2D_ *)arg2 forOptions:(id)arg3;

@end

