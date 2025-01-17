//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class NSCache, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface POISearchManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSCache *_poiCache;
    NSMapTable *_completionHandlers;
    NSMutableDictionary *_canShowActivityIndicatorForBusinessIDs;
    NSMutableDictionary *_loadingForBusinessIDs;
    NSMutableDictionary *_loadingTokensForBusinessIDs;
}

- (void).cxx_destruct;
- (void)didReceiveRAPNotification;
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchForIdentifier:(id)arg1 allowExpired:(_Bool)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 searchResultType:(unsigned int)arg5 callbackQueue:(id)arg6;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_cacheAndHandleSearchResult:(id)arg1 identifier:(id)arg2 completionHandlers:(id)arg3;
- (id)searchResultForIdentifier:(id)arg1;
- (void)_setLoading:(_Bool)arg1 forIdentifier:(id)arg2;
- (void)setCanShowActivityIndicator:(_Bool)arg1 forIdentifier:(id)arg2;
- (void)_updateActivityIndicatorForIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

