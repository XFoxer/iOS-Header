//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSNumber, NSString;

@protocol CoreMLModelSecurityServiceToClientProtocol
- (void)clientFeatureNames:(NSNumber *)arg1 withReply:(void (^)(NSSet *, NSError *))arg2;
- (void)clientFeatureValueForName:(NSString *)arg1 uniqueKeyForProvider:(NSNumber *)arg2 withReply:(void (^)(MLFeatureValue *, NSError *))arg3;
@end

