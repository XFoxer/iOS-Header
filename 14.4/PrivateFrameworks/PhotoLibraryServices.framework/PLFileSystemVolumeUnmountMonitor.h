//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject
{
    NSHashTable *_observers;
    struct os_unfair_lock_s _lock;
    NSURL *_volumeURL;
}

- (void).cxx_destruct;
- (void)removeVolumeUnmountObserver:(id)arg1;
- (void)addVolumeUnmountObserver:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVolumeURL:(id)arg1;

@end

