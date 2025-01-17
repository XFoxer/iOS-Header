//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FRPersonalizationFeatureBundle : NSObject
{
    NSNumber *_groupOrder;
    NSNumber *_feedOrder;
    NSNumber *_sessionDuration;
    CDUnknownBlockType _featuresGenerator;
}

+ (id)personalizationFeatureBundleForFeaturesGenerator:(CDUnknownBlockType)arg1 groupOrder:(id)arg2 feedOrder:(id)arg3 userInfo:(id)arg4;
+ (id)personalizationFeatureBundleForFeaturesGenerator:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType featuresGenerator; // @synthesize featuresGenerator=_featuresGenerator;
@property(retain, nonatomic) NSNumber *sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(retain, nonatomic) NSNumber *feedOrder; // @synthesize feedOrder=_feedOrder;
@property(retain, nonatomic) NSNumber *groupOrder; // @synthesize groupOrder=_groupOrder;
- (void)appendPersonalizationFeaturesGenerator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *features;

@end

