//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXImageViewSpec, PXTitleSubtitleLabelSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec
{
    PXTitleSubtitleLabelSpec *_titleSubtitleSpec;
    PXImageViewSpec *_imageSpec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXImageViewSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec; // @synthesize titleSubtitleSpec=_titleSubtitleSpec;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

