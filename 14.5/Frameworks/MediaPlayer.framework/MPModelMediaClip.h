//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject
{
}

+ (id)__title_KEY;
+ (id)__staticAssets_KEY;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)kind;
+ (id)classesForSecureCoding;
- (id)previewArtworkCatalog;
- (id)humanDescription;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType previewArtworkCatalogBlock; // @dynamic previewArtworkCatalogBlock;
@property(copy, nonatomic) NSArray *staticAssets; // @dynamic staticAssets;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

