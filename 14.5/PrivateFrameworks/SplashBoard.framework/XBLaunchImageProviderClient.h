//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient
{
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}

+ (void)preheatServiceWithTimeout:(double)arg1;
- (void).cxx_destruct;
- (unsigned int)generateImageWithContext:(id)arg1 captureInfo:(id *)arg2 error:(id *)arg3;
- (id)initWithApplicationInfo:(id)arg1;
- (id)init;

@end

