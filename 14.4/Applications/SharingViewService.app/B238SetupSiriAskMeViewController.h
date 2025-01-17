//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface B238SetupSiriAskMeViewController : B238SetupBaseViewController
{
    UIView *_item1View;
    UIImageView *_item1ImageView;
    UILabel *_item1MajorText;
    UILabel *_item1MinorText;
    UIView *_item2View;
    UIImageView *_item2ImageView;
    UILabel *_item2MajorText;
    UILabel *_item2MinorText;
    UIView *_item3View;
    UIImageView *_item3ImageView;
    UILabel *_item3MajorText;
    UILabel *_item3MinorText;
    UIView *_item4View;
    UIImageView *_item4ImageView;
    UILabel *_item4MajorText;
    UILabel *_item4MinorText;
    UIButton *_doneButton;
    NSString *_languageCode;
    unsigned int _viewCount;
}

- (void).cxx_destruct;
- (void)_testHandler:(id)arg1;
- (void)showView:(id)arg1;
- (void)showNextViewForEvent:(unsigned int)arg1 info:(id)arg2;
- (void)showNextViewForEvent:(unsigned int)arg1;
- (void)showDoneButton;
- (void)handleProgressEvent:(unsigned int)arg1 info:(id)arg2;
- (void)handleDoneButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

