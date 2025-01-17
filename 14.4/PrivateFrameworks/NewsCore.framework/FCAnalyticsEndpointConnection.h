//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, FCEndpointConnection;

@interface FCAnalyticsEndpointConnection : NSObject
{
    FCEndpointConnection *_endpointConnection;
    FCAsyncSerialQueue *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) FCEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 priority:(float)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithEndpointConnection:(id)arg1;
- (id)initWithSourceApplicationBundleIdentifier:(id)arg1;

@end

