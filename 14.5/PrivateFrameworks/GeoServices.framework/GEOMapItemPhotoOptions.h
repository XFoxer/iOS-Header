//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapItemPhotoOptions : NSObject
{
    _Bool _allowSmaller;
    long long _preferredCropStyle;
    long long _preferredFormat;
}

+ (id)defaultPhotoOptionsWithCropStyle:(long long)arg1;
+ (id)defaultPhotoOptionsWithAllowSmaller:(_Bool)arg1;
@property(readonly, nonatomic) long long preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(readonly, nonatomic) long long preferredCropStyle; // @synthesize preferredCropStyle=_preferredCropStyle;
@property(readonly, nonatomic) _Bool allowSmaller; // @synthesize allowSmaller=_allowSmaller;
- (id)initWithAllowSmaller:(_Bool)arg1 cropStyle:(long long)arg2 format:(long long)arg3;

@end

