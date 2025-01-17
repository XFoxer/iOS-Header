//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, StoreDownload;
@protocol OS_dispatch_queue;

@interface IPodLibraryItem : NSObject <NSCopying>
{
    NSMutableDictionary *_additionalEntityProperties;
    long long _assetType;
    NSData *_artworkData;
    NSArray *_chapters;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_downloadIdentifier;
    long long _downloadType;
    double _durationInSeconds;
    long long _libraryPersistentIdentifier;
    NSString *_mediaPath;
    StoreDownload *_metadata;
    long long _protectionType;
    long long _updateType;
}

+ (unsigned int)mediaTypeForStoreDownload:(id)arg1;
- (id)_copyChapterVideoTracksForAsset:(id)arg1;
@property long long updateType;
- (void)setValue:(id)arg1 forAdditionalEntityProperty:(id)arg2;
@property long long protectionType;
@property long long libraryPersistentIdentifier;
@property(copy) StoreDownload *itemMetadata;
@property(copy) NSString *itemMediaPath;
@property(copy) NSString *itemDownloadIdentifier;
@property(copy) NSData *itemArtworkData;
@property double durationInSeconds;
@property long long downloadType;
@property(copy) NSArray *chapters;
@property long long assetType;
@property(copy) NSDictionary *additionalEntityProperties;
- (void)loadPropertiesFromMediaPath:(id)arg1 includeTracks:(_Bool)arg2;
@property(readonly) _Bool hasItemArtwork;
@property(readonly, getter=isDownloading) _Bool downloading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

