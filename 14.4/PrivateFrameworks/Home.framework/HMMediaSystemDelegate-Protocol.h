//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMMediaObjectDelegate-Protocol.h>

@class HMApplicationData, HMMediaSystem, NSArray, NSString;

@protocol HMMediaSystemDelegate <HMMediaObjectDelegate>

@optional
- (void)mediaSystemDidUpdateAudioDestination:(HMMediaSystem *)arg1;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateApplicationData:(HMApplicationData *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateComponents:(NSArray *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateConfiguredName:(NSString *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateName:(NSString *)arg2;
@end

