//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject
{
    NSObject<OS_dispatch_queue> *_removeNonAvailableAppClipLinksQueue;
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)requestAppClip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appClipWithQuickLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

