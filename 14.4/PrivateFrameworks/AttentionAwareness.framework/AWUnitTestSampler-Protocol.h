//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AWUnitTestSampler
- (void)setPearlErrorState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setPearlErrorState:(_Bool)arg1;
- (void)setSmartCoverCallback:(void (^)(_Bool))arg1;
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)setDisplayCallback:(void (^)(_Bool))arg1;
- (void)setDisplayState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;
- (void)setSampleState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSampleState:(_Bool)arg1;
- (void)resetStats;
- (void)getStatsWithBlock:(void (^)(struct))arg1;
@end

