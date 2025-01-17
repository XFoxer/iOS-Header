//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ADInterstitialAdDelegate-Protocol.h"

@class ADInterstitialAd, NSString, UILabel, UIView;

@interface FRInterstitialAdPreviewViewController : UIViewController <ADInterstitialAdDelegate>
{
    NSString *_customTargetingID;
    UIView *_containerView;
    ADInterstitialAd *_interstitialAd;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) ADInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *customTargetingID; // @synthesize customTargetingID=_customTargetingID;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)_updateTextLabel;
- (void)dismiss:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

