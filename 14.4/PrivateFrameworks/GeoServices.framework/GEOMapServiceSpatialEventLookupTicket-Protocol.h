//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceSpatialEventLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic) NSArray *parameters;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOSpatialEventLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(GEOSpatialEventLookupResult *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

