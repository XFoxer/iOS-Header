//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class JSContext, JSValue, NSDictionary;

@protocol TVPlaybackEventMarshaling <NSObject>
@property(readonly, nonatomic) NSDictionary *properties;

@optional
- (void)processReturnJSValue:(JSValue *)arg1 inContext:(JSContext *)arg2;
@end

