//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage
{
    NSValue *_sizeValue;
    INImage *_intentsImage;
}

+ (id)_sharedImageLoader;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) INImage *intentsImage; // @synthesize intentsImage=_intentsImage;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (int)source;
- (id)payloadImage;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIntentsImage:(id)arg1;
- (id)initWithPayloadImage:(id)arg1;

@end

