//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>
#import <VideosUI/VUIMediaEntityAssetControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString;
@protocol VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIDownloadEntity : NSObject <VUIMediaEntityAssetControllerDelegate, NSCopying>
{
    id <VUIDownloadEntityDelegate> _delegate;
    long long _downloadType;
    NSObject<VUIMediaEntityIdentifier> *_identifier;
    NSObject<VUIMediaEntityIdentifier> *_showIdentifier;
    NSArray *_mediaEntities;
    NSString *_title;
    NSNumber *_releaseYear;
    NSNumber *_duration;
    NSNumber *_episodeNumber;
    NSNumber *_numberOfMediaItems;
    NSNumber *_numberOfMediaItemsDownloading;
    NSMutableArray *_assetControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *assetControllers; // @synthesize assetControllers=_assetControllers;
@property(retain, nonatomic) NSNumber *numberOfMediaItemsDownloading; // @synthesize numberOfMediaItemsDownloading=_numberOfMediaItemsDownloading;
@property(retain, nonatomic) NSNumber *numberOfMediaItems; // @synthesize numberOfMediaItems=_numberOfMediaItems;
@property(retain, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *releaseYear; // @synthesize releaseYear=_releaseYear;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier; // @synthesize showIdentifier=_showIdentifier;
@property(retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) __weak id <VUIDownloadEntityDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (void)_configureWithMediaEntities:(id)arg1;
- (id)initWithMediaEntities:(id)arg1 withDownloadType:(long long)arg2;
- (id)initWithMediaEntity:(id)arg1 withDownloadType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

