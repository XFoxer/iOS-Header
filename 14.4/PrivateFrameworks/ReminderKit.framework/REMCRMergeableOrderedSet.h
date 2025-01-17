//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class CRDocument, NSMutableArray, NSOrderedSet, REMReplicaIDSource;

@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding>
{
    REMReplicaIDSource *_replicaIDSource;
    CRDocument *_document;
    NSMutableArray *_undos;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *undos; // @synthesize undos=_undos;
@property(retain, nonatomic) CRDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) REMReplicaIDSource *replicaIDSource; // @synthesize replicaIDSource=_replicaIDSource;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mergedOrderedSetWithOrderedSet:(id)arg1 error:(id *)arg2;
- (id)serializedData;
- (id)mutableOrderedSet;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfEqualObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *orderedSet;
- (id)description;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id *)arg3;
- (id)initWithReplicaIDSource:(id)arg1 orderedSet:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 undos:(id)arg3;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;

@end

