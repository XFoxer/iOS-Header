//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isItem:(id)arg1 connectedToItem:(id)arg2;
- (id)allItemsConnectedToItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)connectItem:(id)arg1 withItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

