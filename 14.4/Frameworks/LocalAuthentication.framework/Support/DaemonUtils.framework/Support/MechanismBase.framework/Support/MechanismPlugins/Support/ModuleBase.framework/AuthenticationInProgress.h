//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MechanismBase, NSDate, NSDictionary;
@protocol LAUIDelegate;

@interface AuthenticationInProgress : NSObject
{
    id <LAUIDelegate> _uiDelegate;
    NSDictionary *_internalOptions;
    CDUnknownBlockType _reply;
    int _originatorPid;
    unsigned int _originatorUid;
    NSDate *_started;
    _Bool _running;
    long long _policy;
    MechanismBase *_mechanism;
    long long _originatorId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long originatorId; // @synthesize originatorId=_originatorId;
@property(readonly, nonatomic) MechanismBase *mechanism; // @synthesize mechanism=_mechanism;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithMechanism:(id)arg1 policy:(long long)arg2 uiDelegate:(id)arg3 originator:(id)arg4 internalInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;

@end

