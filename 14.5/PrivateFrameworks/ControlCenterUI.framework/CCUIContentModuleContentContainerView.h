//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView;

@interface CCUIContentModuleContentContainerView : UIView
{
    _Bool _expanded;
    MTMaterialView *_moduleMaterialView;
    _Bool _moduleProvidesOwnPlatter;
    double _compactContinuousCornerRadius;
    double _expandedContinuousCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double expandedContinuousCornerRadius; // @synthesize expandedContinuousCornerRadius=_expandedContinuousCornerRadius;
@property(nonatomic) double compactContinuousCornerRadius; // @synthesize compactContinuousCornerRadius=_compactContinuousCornerRadius;
@property(nonatomic) _Bool moduleProvidesOwnPlatter; // @synthesize moduleProvidesOwnPlatter=_moduleProvidesOwnPlatter;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setContinuousCornerRadius:(double)arg1 ignoreSubviewClipping:(_Bool)arg2;
- (_Bool)_isContentClippingRequiredForSubview:(id)arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)_configureModuleMaterialViewIfNecessary;
- (void)didEndTransitionToExpandedMode:(_Bool)arg1;
- (void)transitionToExpandedMode:(_Bool)arg1;
- (void)_transitionToExpandedMode:(_Bool)arg1 force:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

