//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>

@protocol OS_dispatch_queue, SCKDatabaseStore;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>
{
    id <SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SCKDatabaseStore> store; // @synthesize store=_store;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (id)initWithDatabaseStore:(id)arg1;

@end

