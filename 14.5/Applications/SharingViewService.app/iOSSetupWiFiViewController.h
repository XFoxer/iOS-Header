//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iOSSetupBaseViewController.h"

@class UIButton, UIImageView, UILabel;

@interface iOSSetupWiFiViewController : iOSSetupBaseViewController
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    UIButton *_continueButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)handleDismissButton:(id)arg1;
- (void)handleContinueButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

