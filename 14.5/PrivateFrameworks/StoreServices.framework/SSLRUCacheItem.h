//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSDoubleLinkedListNode.h>

@protocol NSCopying;

@interface SSLRUCacheItem : SSDoubleLinkedListNode
{
    id <NSCopying> _key;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NSCopying> key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end

