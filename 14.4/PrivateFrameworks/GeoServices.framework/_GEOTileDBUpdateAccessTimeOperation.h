//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOTileDBWriteOperation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBUpdateAccessTimeOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;
    double _timestamp;
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;
- (_Bool)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;
- (_Bool)canIncreaseDataSizeInDB;
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 timestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

