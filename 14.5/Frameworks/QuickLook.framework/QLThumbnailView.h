//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView
{
    _Bool _alwaysVisible;
    UIImage *_image;
    long long _pageNumber;
    struct CGRect _unselectedFrame;
}

- (void).cxx_destruct;
@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property _Bool alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

