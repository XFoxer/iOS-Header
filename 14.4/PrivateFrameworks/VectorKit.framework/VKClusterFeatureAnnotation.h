//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCustomFeatureAnnotation-Protocol.h>

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation>
{
    CDStruct_2c43369c _coordinate;
    VKCustomFeature *_customFeature;
}

@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)feature;
- (void)dealloc;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode *)arg1 clusterTree:(const shared_ptr_e2fd4869 *)arg2 baseStyle:(id)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

