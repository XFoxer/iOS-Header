//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKCustomFeatureAnnotation-Protocol.h"

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _ShareCustomFeature : NSObject <MKCustomFeatureAnnotation>
{
    VKCustomFeature *_feature;
    CDStruct_2c43369c _coordinate;
}

+ (id)customFeatureForMapItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)feature;
- (id)initWithCustomFeature:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

