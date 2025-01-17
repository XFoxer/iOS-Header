//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETImageDescriptorExtractor : NSObject
{
    void *_plan;
    CDStruct_2bc666a5 _net;
    void *_ctx;
    CDStruct_0a65202a _inputBlob;
    CDStruct_0a65202a _outputBlob;
    unsigned long long _targetWidth;
    unsigned long long _targetHeight;
    basic_string_23d93216 _inputName;
    unsigned long long *_inputShape;
    float _rotation_range;
    float _horizontal_flip;
    float _zoom_range;
    float _shear_range;
    float _contrast_range;
    float _brightness_range;
    int _nAugmentations;
    int _doBatchnormTuning;
    unsigned long long _descriptors_mem_cache_size;
    unsigned long long _descriptors_file_cache_size;
}

+ (id)VisionSmartCamNet_iOS11_Extractor;
+ (id)passthroughExtractor;
+ (id)inception_v3_Extractor;
+ (id)VisionSceneNet_iOS10_Extractor;
- (id).cxx_construct;
- (void).cxx_destruct;
@property unsigned long long descriptors_file_cache_size; // @synthesize descriptors_file_cache_size=_descriptors_file_cache_size;
@property unsigned long long descriptors_mem_cache_size; // @synthesize descriptors_mem_cache_size=_descriptors_mem_cache_size;
@property int doBatchnormTuning; // @synthesize doBatchnormTuning=_doBatchnormTuning;
@property int nAugmentations; // @synthesize nAugmentations=_nAugmentations;
@property float brightness_range; // @synthesize brightness_range=_brightness_range;
@property float contrast_range; // @synthesize contrast_range=_contrast_range;
@property float shear_range; // @synthesize shear_range=_shear_range;
@property float zoom_range; // @synthesize zoom_range=_zoom_range;
@property float horizontal_flip; // @synthesize horizontal_flip=_horizontal_flip;
@property float rotation_range; // @synthesize rotation_range=_rotation_range;
- (int)numberOfChannels;
- (float *)extractDescriptorForDataPoint:(struct vImage_Buffer)arg1 freeWhenDone:(_Bool)arg2;
- (struct vImage_Buffer)cropResizeInputImage:(struct vImage_Buffer)arg1;
- (void)extractForDataPoint:(id)arg1;
- (id)initWithNetwork:(id)arg1;

@end

