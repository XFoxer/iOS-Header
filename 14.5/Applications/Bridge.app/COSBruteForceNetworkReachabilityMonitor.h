//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface COSBruteForceNetworkReachabilityMonitor : NSObject
{
}

+ (void)checkServerReachability:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_issueResponse:(_Bool)arg1;
+ (void)issueResponse;
+ (void)checkCompleteStateForResponse:(id)arg1 andError:(id)arg2;
+ (void)checkServerReachabilityWithCompletion:(CDUnknownBlockType)arg1;
+ (id)checkDomains;

@end

