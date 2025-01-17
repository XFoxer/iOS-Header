//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFWallpaperEditCollection, NAFuture;
@protocol HFHomeKitObject><HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject
{
    _Bool _hkObjectNewlyCreated;
    id <HFHomeKitObject><HMApplicationData> _hkObject;
    long long _namedWallpaperCollectionType;
    NAFuture *_initialEditCollectionFuture;
    HFWallpaperEditCollection *_updatedEditCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection; // @synthesize updatedEditCollection=_updatedEditCollection;
@property(retain, nonatomic) NAFuture *initialEditCollectionFuture; // @synthesize initialEditCollectionFuture=_initialEditCollectionFuture;
@property(nonatomic) _Bool hkObjectNewlyCreated; // @synthesize hkObjectNewlyCreated=_hkObjectNewlyCreated;
@property(nonatomic) long long namedWallpaperCollectionType; // @synthesize namedWallpaperCollectionType=_namedWallpaperCollectionType;
@property(retain, nonatomic) id <HFHomeKitObject><HMApplicationData> hkObject; // @synthesize hkObject=_hkObject;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)commitWallpaper;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)wallpaperEditCollectionFuture;
- (id)description;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;

@end

