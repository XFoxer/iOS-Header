//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>
{
}

+ (id)lpPluginPathsCustomKey;
+ (id)lpHasRichMediaCustomKey;
+ (_Bool)_richLinkPluginHasRichContentForItem:(id)arg1 attachmentPaths:(id)arg2;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)arg1;
+ (id)_newSummaryTextForPayloadData:(id)arg1 item:(id)arg2;
+ (id)lpDescriptionCustomKey;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

