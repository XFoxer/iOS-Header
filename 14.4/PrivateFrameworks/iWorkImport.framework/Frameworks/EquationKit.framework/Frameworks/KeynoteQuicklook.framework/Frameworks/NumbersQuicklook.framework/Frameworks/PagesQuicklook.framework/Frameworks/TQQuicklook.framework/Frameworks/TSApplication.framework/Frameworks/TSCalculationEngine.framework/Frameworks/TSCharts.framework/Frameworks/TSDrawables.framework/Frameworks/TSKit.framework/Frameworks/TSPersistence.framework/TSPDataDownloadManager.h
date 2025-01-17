//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObjectContext;
@protocol TSPDataDownloadManagerDelegate;

@interface TSPDataDownloadManager : NSObject
{
    TSPObjectContext *_context;
    id <TSPDataDownloadManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TSPDataDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)unmaterializedRemoteData;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

