//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
}

+ (struct CGSize)_imageSize;
+ (id)templateWithImageProvider:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;
- (id)initWithImageProvider:(id)arg1;

@end

