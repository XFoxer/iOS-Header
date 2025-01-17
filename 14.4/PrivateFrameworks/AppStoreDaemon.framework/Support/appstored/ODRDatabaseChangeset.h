//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableSet, NSSet;

@interface ODRDatabaseChangeset : NSObject <NSCopying>
{
    NSMutableSet *_deletedAssetPackURLs;
    NSMutableSet *_deletedStorageIDs;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSSet *deletedStorageIDs;
@property(readonly, copy) NSSet *deletedAssetPackURLs;
- (void)unionChangeset:(id)arg1;
- (void)addDeletedStorageID:(id)arg1;
- (void)addDeletedAssetPackURL:(id)arg1;

@end

