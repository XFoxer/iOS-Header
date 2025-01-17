//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    UIColor *_backgroundColor;
    long long _position;
    double _zoomingImageAlpha;
    double _zoomingImageWidth;
    double _zoomingImageImposedAlphaOfOtherViews;
    double _zoomingImageLambda;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_zoomingImageLambda, setter=_setZoomingImageLambda:) double zoomingImageLambda; // @synthesize zoomingImageLambda=_zoomingImageLambda;
@property(nonatomic) double zoomingImageImposedAlphaOfOtherViews; // @synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews;
@property(nonatomic) double zoomingImageWidth; // @synthesize zoomingImageWidth=_zoomingImageWidth;
@property(nonatomic) double zoomingImageAlpha; // @synthesize zoomingImageAlpha=_zoomingImageAlpha;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

