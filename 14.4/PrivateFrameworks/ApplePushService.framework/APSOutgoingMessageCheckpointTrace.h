//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace
{
    CUTCheckpointRange *_sendToDaemon;
    CUTCheckpointRange *_messageOnQueue;
    CUTCheckpointRange *_waitForACK;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CUTCheckpointRange *waitForACK; // @synthesize waitForACK=_waitForACK;
@property(readonly, nonatomic) CUTCheckpointRange *messageOnQueue; // @synthesize messageOnQueue=_messageOnQueue;
@property(readonly, nonatomic) CUTCheckpointRange *sendToDaemon; // @synthesize sendToDaemon=_sendToDaemon;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;

@end

