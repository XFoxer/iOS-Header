//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneLibrary/NSObject-Protocol.h>

@class NSArray, SSDownloadManager;

@protocol SSDownloadManagerObserver <NSObject>

@optional
- (void)downloadManagerNetworkUsageDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerActiveDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg1 downloadStatesDidChange:(NSArray *)arg2;
@end

