//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector, AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader
{
    struct OpaqueFigAsset *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_loadingBatches;
    _Bool _loadingCanceled;
    _Bool _registeredForFigAssetNotifications;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetPropertiesForKeys;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (_Bool)isAssociatedWithFragmentMinder;
- (void)_setFragmentMindingInterval:(double)arg1;
- (double)_fragmentMindingInterval;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (long long)fragmentCount;
- (long long)firstFragmentSequenceNumber;
- (_Bool)_isStreaming;
- (_Bool)hasProtectedContent;
- (unsigned long long)downloadToken;
- (id)originalNetworkContentURL;
- (id)resolvedURL;
- (id)URL;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (_Bool)isComposable;
- (_Bool)isReadable;
- (_Bool)isExportable;
- (_Bool)isPlayable;
- (id)lyrics;
- (CDStruct_1b6d18a9)duration;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_statusOfValueForKey:(id)arg1 error:(id *)arg2 firstNonLoadedDependencyKey:(id *)arg3;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset *)arg2 error:(id *)arg3;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (id)_completionHandlerQueue;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigAsset *)_figAsset;
- (id)assetInspector;
- (id)asset;
- (struct OpaqueFigFormatReader *)_formatReader;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1 forAsset:(id)arg2;
- (id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 avAssetInitializationOptions:(id)arg4 forAsset:(id)arg5;

@end

