//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBInitialRestartState;

@interface SBStartupTransitionFactory : NSObject
{
    SBInitialRestartState *_initialRestartState;
}

- (void).cxx_destruct;
- (id)_transactionForDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)transitionForContext:(id)arg1 outDestination:(unsigned long long *)arg2;
- (id)initWithInitialRestartState:(id)arg1;

@end

