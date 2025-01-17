//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class UIImage;

@interface FRPageControl : UIPageControl
{
    UIImage *_indicatorCurrentImage;
    UIImage *_indicatorImage;
    double _pageIndicatorSpacing;
}

+ (double)dotSize;
+ (id)lineCircleImageWithColor:(id)arg1;
+ (id)solidCircleImageWithColor:(id)arg1;
+ (id)solidIndicatorCurrentImage;
+ (id)solidIndicatorImage;
+ (id)defaultIndicatorCurrentImage;
+ (id)defaultIndicatorImage;
- (void).cxx_destruct;
@property(nonatomic) double pageIndicatorSpacing; // @synthesize pageIndicatorSpacing=_pageIndicatorSpacing;
@property(retain, nonatomic) UIImage *indicatorImage; // @synthesize indicatorImage=_indicatorImage;
@property(retain, nonatomic) UIImage *indicatorCurrentImage; // @synthesize indicatorCurrentImage=_indicatorCurrentImage;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (double)_indicatorSpacing;

@end

