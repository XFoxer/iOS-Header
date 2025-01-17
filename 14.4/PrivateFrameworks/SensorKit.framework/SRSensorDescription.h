//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SRSensorDescription : NSObject
{
    NSString *_name;
    NSString *_authorizationService;
    NSString *_writerBundleIdentifier;
    NSArray *_relatedSettingsCategories;
    NSString *_publicEntitlementValue;
    NSString *_localizedAdditionalSampleDataNote;
    NSString *_infoPlistAuthorizationCategory;
    NSString *_sampleClass;
    NSString *_exportingSampleClass;
    NSSet *_additions;
}

+ (void)initialize;
- (id)description;
- (void)dealloc;

@end

