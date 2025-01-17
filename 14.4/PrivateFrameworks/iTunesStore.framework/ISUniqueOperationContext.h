//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject
{
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (id)uniqueOperationForKey:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (void)removeOperation:(id)arg1;
- (unsigned long long)countOfOperations;
- (_Bool)containsOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

