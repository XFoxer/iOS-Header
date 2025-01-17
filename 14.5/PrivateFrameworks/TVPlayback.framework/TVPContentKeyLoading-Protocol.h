//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSArray, NSData, NSURL;

@protocol TVPContentKeyLoading <NSObject>
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1;

@optional
- (void)updateOfflineKeyWithIdentifier:(NSURL *)arg1 updatedOfflineKeyData:(NSData *)arg2;
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

