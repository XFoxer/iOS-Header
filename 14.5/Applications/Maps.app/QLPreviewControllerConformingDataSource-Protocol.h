//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QLPreviewControllerConforming, QLPreviewItem;

@protocol QLPreviewControllerConformingDataSource <NSObject>
- (id <QLPreviewItem>)previewController:(id <QLPreviewControllerConforming>)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id <QLPreviewControllerConforming>)arg1;
@end

