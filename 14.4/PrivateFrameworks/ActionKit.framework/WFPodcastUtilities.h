//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFPodcastUtilities : NSObject
{
}

+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)createPreferredPlayerPathWithCompletion:(CDUnknownBlockType)arg1;
+ (void *)createLocalPlayerPath;
+ (void *)createPlayerPathForOrigin:(void *)arg1;
+ (struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(_Bool)arg2;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;

@end

