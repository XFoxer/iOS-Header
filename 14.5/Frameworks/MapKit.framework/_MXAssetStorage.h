//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXAssetStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}

- (void).cxx_destruct;
- (void)fetchAssetForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)loadAssetForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

