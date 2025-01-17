//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSString;

@interface CAMMessagesPhotosButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)photosButton;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

