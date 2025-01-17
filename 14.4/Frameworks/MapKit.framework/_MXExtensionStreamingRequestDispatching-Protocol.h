//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject, Protocol;
@protocol NSObject, NSSecureCoding, _MXExtensionResponseObserver;

@protocol _MXExtensionStreamingRequestDispatching <NSObject>
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2;
- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2 toObserver:(id <_MXExtensionResponseObserver>)arg3;

@optional
- (Protocol *)serviceProtocol;
@end

