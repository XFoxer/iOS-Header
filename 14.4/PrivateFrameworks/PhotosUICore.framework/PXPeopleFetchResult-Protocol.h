//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSFastEnumeration-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSIndexSet;
@protocol PXPerson;

@protocol PXPeopleFetchResult <NSObject, NSFastEnumeration>
@property(readonly, nonatomic) long long count;
- (_Bool)containsObject:(id <PXPerson>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <PXPerson>)objectAtIndex:(unsigned long long)arg1;
@end

