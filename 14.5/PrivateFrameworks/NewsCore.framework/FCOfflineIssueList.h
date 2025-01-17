//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSArray, NSHashTable;

@interface FCOfflineIssueList : NSObject
{
    FCKeyValueStore *_localStore;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeAllIssues;
- (void)removeIssueIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *issueIDs;
- (id)dateRemovedForIssueID:(id)arg1;
- (id)dateAddedForIssueID:(id)arg1;
- (long long)sourceForIssueID:(id)arg1;
- (_Bool)everContainedIssueID:(id)arg1;
- (_Bool)containsIssueID:(id)arg1;
- (void)addIssueID:(id)arg1 source:(long long)arg2;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (id)initWithStoreDirectoryFileURL:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3;
- (id)init;

@end

