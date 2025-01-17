//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSaverTileLoaderProxy-Protocol.h>

@class NSString;
@protocol GEODataSaverTileLoaderProxy;

@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy>
{
    id <GEODataSaverTileLoaderProxy> _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;
- (void).cxx_destruct;
- (void)_debug_initiateDataSaverPreload;
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

