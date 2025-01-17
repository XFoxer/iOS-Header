//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>
{
}

+ (void)stopTimingWithProfiler:(id)arg1;
+ (void)startTimingWithProfiler:(id)arg1;
+ (id)timingProfileKey;
+ (id)isBusinessChatCustomKey;
+ (id)isFromMeCustomKey;
+ (id)indexTypeCustomKey;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(_Bool)arg4 timingProfiler:(id)arg5;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;
+ (_Bool)cancelIndexingForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

