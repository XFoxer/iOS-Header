//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBProcess, FBProcessManager;

@protocol FBProcessManagerObserver <NSObject>
- (void)processManager:(FBProcessManager *)arg1 didRemoveProcess:(FBProcess *)arg2;
- (void)processManager:(FBProcessManager *)arg1 didAddProcess:(FBProcess *)arg2;
@end

