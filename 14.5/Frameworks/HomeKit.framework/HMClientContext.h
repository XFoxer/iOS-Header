//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSString;

@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_metricIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *metricIdentifier; // @synthesize metricIdentifier=_metricIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetricIdentifier:(id)arg1;

@end

