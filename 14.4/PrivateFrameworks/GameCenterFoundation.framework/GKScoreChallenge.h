//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallenge : GKChallenge
{
    GKScore *_score;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)detailsLoaded;
- (id)titleText;
@property(readonly, nonatomic) GKLeaderboard *leaderboard; // @dynamic leaderboard;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;

@end

