//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionFade : SCNAction
{
    struct SCNCActionFade *_mycaction;
}

+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

