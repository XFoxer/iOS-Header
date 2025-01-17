//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class PXGAssetDecorationViewConfiguration, PXRoundProgressView, PXUpdater;

@interface PXGAssetDecorationView : UIView <PXGReusableView>
{
    PXUpdater *_updater;
    PXRoundProgressView *_progressIndicatorView;
    PXGAssetDecorationViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

+ (_Bool)_wantsProgressIndicatorForConfiguration:(id)arg1;
+ (_Bool)wantsDecorationViewForConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) PXGAssetDecorationViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateProgressIndicator;
- (void)_invalidateProgressIndicator;
- (void)_setNeedsUpdate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

