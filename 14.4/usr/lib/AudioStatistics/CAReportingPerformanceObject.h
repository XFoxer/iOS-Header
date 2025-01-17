//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CAReportingPerformanceObject : NSObject
{
    unsigned short _serviceType;
    NSDictionary *_performanceMetrics;
    NSDictionary *_configuration;
    NSString *_perfDataPath;
    NSString *_perfDataName;
    NSArray *_processIdentifiers;
}

- (void).cxx_destruct;
@property(retain) NSArray *processIdentifiers; // @synthesize processIdentifiers=_processIdentifiers;
@property(retain) NSString *perfDataName; // @synthesize perfDataName=_perfDataName;
@property(retain) NSString *perfDataPath; // @synthesize perfDataPath=_perfDataPath;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned short serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSDictionary *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
- (id)endAndReturnPerformanceMetrics;
- (void)begin;
- (id)initWithProcessIdentifiers:(id)arg1;

@end

