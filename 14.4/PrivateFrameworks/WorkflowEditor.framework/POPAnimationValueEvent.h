//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent
{
    id _value;
    id _velocity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void)_appendDescription:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3;

@end

