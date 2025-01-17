//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKPlayerInternal, NSArray;

@protocol GKFriendService <NSObject>
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getChallengableFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

