//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PGDeduper : NSObject
{
    NSSet *_identifiersOfRequiredItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *identifiersOfRequiredItems; // @synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems;
- (id)requiredItemsInItems:(id)arg1;
- (_Bool)itemIsRequired:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end

