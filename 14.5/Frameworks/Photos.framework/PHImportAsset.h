//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHImportDuplicateCheckerItem-Protocol.h>

@class AVAssetImageGenerator, IPAMetadata, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSTimeZone, NSURL, PHImportSource;
@protocol OS_dispatch_queue;

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem>
{
    PHImportSource *_source;
    PHImportSource *_strongSource;
    struct os_unfair_lock_s _metadataLock;
    NSDictionary *_userMetadata;
    NSDictionary *_userInfo;
    NSString *_basenameForOriginalAdjustment;
    unsigned char _duplicateStateConfidence;
    _Bool _canReference;
    _Bool _isDuplicate;
    _Bool _treatAsUnsupportedRAW;
    _Bool _sidecarsLoaded;
    unsigned char _fileLocation;
    unsigned short _resourceSubType;
    id _uuid;
    IPAMetadata *_metadata;
    NSMutableArray *_relatedBurstAssets;
    PHImportAsset *_burstPick;
    id _avchdAssetId;
    id _assetId;
    NSMutableDictionary *_duplicates;
    NSDate *_lastDuplicateCheck;
    NSURL *_url;
    NSString *_uti;
    NSString *_fileName;
    NSString *_createdFileName;
    unsigned long long _fileSize;
    NSString *_fileExtension;
    NSSet *_duplicateAssets;
    PHImportAsset *_rawAsset;
    PHImportAsset *_videoComplement;
    PHImportAsset *_largeRender;
    PHImportAsset *_largeMovieRender;
    PHImportAsset *_spatialOverCapture;
    PHImportAsset *_base;
    PHImportAsset *_thumbnailRender;
    PHImportAsset *_miniRender;
    PHImportAsset *_audioAsset;
    NSDate *_fileCreationDate;
    NSDate *_fileModificationDate;
    AVAssetImageGenerator *_imageGenerator;
    NSObject<OS_dispatch_queue> *_loadSidecars;
    NSString *_importIdentifier;
    NSMutableDictionary *_filePresenters;
    NSDate *_exifImageDate;
    unsigned long long _copyMethod;
    NSData *_fileData;
    long long _resourceType;
    NSMutableDictionary *_sidecarAssetsByType;
    struct CGSize _thumbnailSize;
    struct CGSize _imageSize;
}

+ (_Bool)isOriginalAdjustmentData:(id)arg1;
+ (void)determineIfTIFFIsRAW:(id)arg1 url:(id)arg2;
+ (id)loadDatesForAssets:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
+ (id)loadDatesForAssetSequence:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
+ (void)logImageDateFileDateDifferencesForAsset:(id)arg1;
+ (id)assetFileForURL:(id)arg1 source:(id)arg2;
+ (id)assetFileForURL:(id)arg1 source:(id)arg2 withUuid:(id)arg3;
+ (_Bool)isValidAsSidecar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sidecarAssetsByType; // @synthesize sidecarAssetsByType=_sidecarAssetsByType;
@property(nonatomic) unsigned short resourceSubType; // @synthesize resourceSubType=_resourceSubType;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(readonly, nonatomic) __weak PHImportSource *source; // @synthesize source=_source;
@property(nonatomic) unsigned char fileLocation; // @synthesize fileLocation=_fileLocation;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) unsigned long long copyMethod; // @synthesize copyMethod=_copyMethod;
@property(retain, nonatomic) NSDate *exifImageDate; // @synthesize exifImageDate=_exifImageDate;
@property(retain, nonatomic) NSMutableDictionary *filePresenters; // @synthesize filePresenters=_filePresenters;
@property(retain, nonatomic) NSString *importIdentifier; // @synthesize importIdentifier=_importIdentifier;
@property(nonatomic) _Bool sidecarsLoaded; // @synthesize sidecarsLoaded=_sidecarsLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadSidecars; // @synthesize loadSidecars=_loadSidecars;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool treatAsUnsupportedRAW; // @synthesize treatAsUnsupportedRAW=_treatAsUnsupportedRAW;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSDate *fileModificationDate; // @synthesize fileModificationDate=_fileModificationDate;
@property(retain, nonatomic) NSDate *fileCreationDate; // @synthesize fileCreationDate=_fileCreationDate;
@property(retain, nonatomic) PHImportAsset *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(retain, nonatomic) PHImportAsset *miniRender; // @synthesize miniRender=_miniRender;
@property(retain, nonatomic) PHImportAsset *thumbnailRender; // @synthesize thumbnailRender=_thumbnailRender;
@property(retain, nonatomic) PHImportAsset *base; // @synthesize base=_base;
@property(retain, nonatomic) PHImportAsset *spatialOverCapture; // @synthesize spatialOverCapture=_spatialOverCapture;
@property(retain, nonatomic) PHImportAsset *largeMovieRender; // @synthesize largeMovieRender=_largeMovieRender;
@property(retain, nonatomic) PHImportAsset *largeRender; // @synthesize largeRender=_largeRender;
@property(retain, nonatomic) PHImportAsset *videoComplement; // @synthesize videoComplement=_videoComplement;
@property(retain, nonatomic) PHImportAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly, nonatomic) NSSet *duplicateAssets; // @synthesize duplicateAssets=_duplicateAssets;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *createdFileName; // @synthesize createdFileName=_createdFileName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain) NSDate *lastDuplicateCheck; // @synthesize lastDuplicateCheck=_lastDuplicateCheck;
@property(retain) NSMutableDictionary *duplicates; // @synthesize duplicates=_duplicates;
@property _Bool isDuplicate; // @synthesize isDuplicate=_isDuplicate;
@property(readonly) id assetId; // @synthesize assetId=_assetId;
@property(readonly) id avchdAssetId; // @synthesize avchdAssetId=_avchdAssetId;
@property(retain, nonatomic) PHImportAsset *burstPick; // @synthesize burstPick=_burstPick;
@property(retain, nonatomic) NSMutableArray *relatedBurstAssets; // @synthesize relatedBurstAssets=_relatedBurstAssets;
@property unsigned char duplicateStateConfidence; // @synthesize duplicateStateConfidence=_duplicateStateConfidence;
@property(retain, nonatomic) id uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqualToImportAsset:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)setUserMetadata:(id)arg1;
- (id)userMetadata;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)duplicateAssetsForLibrary:(id)arg1;
- (void)setDuplicates:(id)arg1 forLibrary:(id)arg2;
@property(readonly) id sizeKey;
@property(readonly) NSDate *dateKey;
@property(readonly) id nameKey;
@property(readonly, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) NSString *assetDescription;
@property(readonly, nonatomic) NSSet *keywordTitles;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSTimeZone *exifTimeZone;
- (id)timezoneCorrectedExifImageDate;
@property(readonly) id originatingAssetID;
- (void)copyToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyFromURL:(id)arg1 toURL:(id)arg2;
- (void)_addRelatedRecordsToRecord:(id)arg1 primaryRecord:(id)arg2;
- (id)importRecordForPrimaryAsset;
- (id)sidecarInfoDictionaries;
- (id)sidecarInfoDictionary;
- (id)resourceTypes;
- (_Bool)hasOriginalResourceType;
- (id)validateMetadataForImportRecord:(id)arg1;
- (_Bool)isBlessed:(id)arg1 includeXmp:(_Bool)arg2;
- (_Bool)isValidMetadata:(id)arg1;
- (struct CGImage *)avThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id *)arg3;
- (struct CGImage *)imageThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id *)arg3;
- (struct CGImage *)removeBlackBarsFromExifThumbnail:(struct CGImage *)arg1 fullSize:(struct CGSize)arg2;
- (struct CGSize)cropEXIFThumbSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (void)thumbnailUsingRequest:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (id)thumbnailForSize:(unsigned long long)arg1 priority:(unsigned char)arg2 atEnd:(CDUnknownBlockType)arg3;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(CDUnknownBlockType)arg2;
- (void)_setMetadata:(id)arg1;
@property(retain, nonatomic) IPAMetadata *metadata; // @synthesize metadata=_metadata;
- (void)loadMetadataAsync:(CDUnknownBlockType)arg1;
- (void)loadMetadataSync;
- (void)addBurstAsset:(id)arg1;
- (_Bool)isAppropriateForUI;
- (id)xmpSidecar;
- (id)originalAaeSidecar;
- (id)aaeSidecar;
- (id)slmSidecar;
- (void)removeSidecarAsset:(id)arg1;
- (void)addSidecarAsset:(id)arg1;
- (unsigned long long)sidecarAssetBytes;
@property(readonly, nonatomic) NSArray *sidecarAssets;
- (void)_loadSidecarFiles;
- (void)loadSidecarFiles;
- (id)checkForSidecarWithName:(id)arg1;
- (id)checkForSidecarWithExtension:(id)arg1;
- (unsigned long long)relatedBytes;
- (id)relatedAssets;
@property(readonly, nonatomic) unsigned long long approximateBytesRequiredToImport;
@property(readonly, nonatomic) unsigned long long assetSizeIncludingRelatedAssets;
@property(readonly, nonatomic) NSNumber *trackFormat;
@property(readonly, nonatomic) NSNumber *bitrate;
@property(readonly, nonatomic) NSNumber *sampleRate;
@property(readonly, nonatomic) NSNumber *fps;
@property(readonly, nonatomic) NSString *codec;
@property(readonly, nonatomic) NSNumber *shutterSpeed;
@property(readonly, nonatomic) NSNumber *aperture;
@property(readonly, nonatomic) NSNumber *exposureBias;
@property(readonly, nonatomic) NSNumber *focalLength;
@property(readonly, nonatomic) NSNumber *iso;
@property(readonly, nonatomic) NSNumber *meteringMode;
@property(readonly, nonatomic) NSNumber *whiteBalance;
@property(readonly, nonatomic) NSNumber *flashFired;
@property(readonly, nonatomic) NSString *lensModel;
@property(readonly, nonatomic) NSString *cameraModel;
@property(readonly, nonatomic) NSString *cameraMake;
@property(readonly, nonatomic) NSNumber *duration;
- (id)spatialOverCaptureIdentifier;
- (id)mediaGroupId;
- (int)burstPickType;
- (id)groupingUUID;
@property(readonly, nonatomic) NSString *burstUUID;
- (struct CGSize)cgImageSize;
- (void)_accessMetadata:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasAdjustments;
@property(readonly, nonatomic) _Bool isViewable;
@property(readonly, nonatomic) _Bool isTagged;
- (void)takeAsVideoComplement:(id)arg1;
- (_Bool)isVideoComplementOf:(id)arg1;
- (_Bool)performAdditionalLivePhotoChecksOnImageAsset:(id)arg1;
- (id)stripMarkerFromName:(id)arg1 markerLocation:(unsigned long long)arg2;
- (id)basenameForOriginalAdjustmentData;
- (_Bool)isOriginalAdjustmentData;
- (_Bool)isBase;
- (_Bool)isSpatialOverCapture;
- (_Bool)isRender;
- (_Bool)isPrimary;
- (_Bool)isRepresentation;
@property(readonly, nonatomic) _Bool isGrouped;
@property(readonly, nonatomic) _Bool hasAudioAttachment;
@property(readonly, nonatomic) _Bool isLivePhoto;
@property(readonly, nonatomic) _Bool isBurst;
@property(readonly, nonatomic) _Bool isSDOF;
@property(readonly, nonatomic) _Bool isHDR;
@property(readonly, nonatomic) _Bool isJpegPlusRAW;
@property(readonly, nonatomic) _Bool isTimelapse;
@property(readonly, nonatomic) _Bool isAVCHD;
@property(readonly, nonatomic) _Bool isSloMo;
@property(readonly, nonatomic) _Bool isSidecar;
@property(readonly, nonatomic) _Bool isPSD;
@property(readonly, nonatomic) _Bool isPNG;
@property(readonly, nonatomic) _Bool isPDF;
@property(readonly, nonatomic) _Bool isGIF;
@property(readonly, nonatomic) _Bool isHEIF;
@property(readonly, nonatomic) _Bool isTIFF;
@property(readonly, nonatomic) _Bool isRAW;
@property(readonly, nonatomic) _Bool isJPEG2000;
@property(readonly, nonatomic) _Bool isJPEG;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isMovie;
@property(readonly, nonatomic) _Bool isImage;
- (_Bool)isValidForReference;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canReference; // @synthesize canReference=_canReference;
@property(readonly, nonatomic) NSString *parentFolderPath;
- (_Bool)canPreserveFolderStructure;
@property(readonly, nonatomic) id representedObject;
- (id)descriptionWithPrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 url:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4;
- (id)initWithSource:(id)arg1;
- (_Bool)configureWithUTI:(id)arg1 supportedType:(unsigned char)arg2;
- (void)updateIsRAW:(_Bool)arg1 uti:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

