//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSLimitation.h>

@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation
{
    RBSProcessPredicate *_predicate;
}

+ (id)limitationWithPredicate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) RBSProcessPredicate *predicate; // @synthesize predicate=_predicate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)description;
- (id)_initWithPredicate:(id)arg1;

@end

