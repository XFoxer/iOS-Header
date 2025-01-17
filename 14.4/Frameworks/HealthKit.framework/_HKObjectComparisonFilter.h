//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKComparisonFilter.h>

@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter
{
    _Bool _compareForLocalDevice;
    NSString *_devicePropertyName;
    NSString *_metadataKey;
}

+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (_Bool)allowsEmptyContainerValuesForKeyPath:(id)arg1;
+ (_Bool)allowsEmptyDataTypesSetForKeyPath:(id)arg1;
+ (_Bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id *)arg5;
+ (_Bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (_Bool)isSupportedKeyPath:(id)arg1;
+ (_Bool)isSupportedDevicePropertyKey:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_acceptsDataObjectWithContributor:(id)arg1;
- (_Bool)_acceptsDataObjectWithMetadata:(id)arg1;
- (_Bool)_acceptsDataObjectComparingDeviceProperty:(id)arg1;
- (_Bool)_acceptsDataObjectWithCreationTime:(double)arg1;
- (_Bool)_acceptsDataObjectWithAppleWatchSource:(id)arg1;
- (_Bool)_acceptsDataObjectWithSource:(id)arg1;
- (_Bool)_acceptsDataObjectWithValue:(id)arg1;
- (void)_configureForMetdataKeyPath;
- (void)_configureForKeyPathDeviceProperty;
- (void)_configureForKeyPathSource;
- (_Bool)acceptsDataObject:(id)arg1;
- (void)configureInMemoryFilter;

@end

