//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKLinkedApplication, UIActivityIndicatorView, UIColor;

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver>
{
    UIActivityIndicatorView *_activityIndicator;
    UIColor *_textColor;
    UIColor *_disabledTextColor;
    PKLinkedApplication *_linkedApplication;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)linkedApplicationDidChangeState:(id)arg1;
@property(copy, nonatomic) NSURL *appLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs;
- (void)reloadApplicationStateIfNecessary;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

