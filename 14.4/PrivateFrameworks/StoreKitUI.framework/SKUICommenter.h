//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICommenter : SKUIMediaSocialAuthor
{
    _Bool _isAttributed;
    _Bool _isMySelf;
    _Bool _useImageCopy;
    NSString *_attributedName;
    UIImage *_thumbnailImage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool useImageCopy; // @synthesize useImageCopy=_useImageCopy;
@property(nonatomic) _Bool isMySelf; // @synthesize isMySelf=_isMySelf;
@property(nonatomic) _Bool isAttributed; // @synthesize isAttributed=_isAttributed;
@property(retain, nonatomic) NSString *attributedName; // @synthesize attributedName=_attributedName;
- (id)initWithAuthor:(id)arg1;

@end

