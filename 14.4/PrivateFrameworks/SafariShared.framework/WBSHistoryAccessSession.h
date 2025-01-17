//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryAccessSessionProtocol-Protocol.h>

@class WBSHistoryService;
@protocol OS_dispatch_queue;

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol>
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHistoryService:(id)arg1;

@end

