//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDMessageFilter : HMFObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (_Bool)shouldCloudSyncData;
- (void)resetConfiguration;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (id)initWithName:(id)arg1;

@end

