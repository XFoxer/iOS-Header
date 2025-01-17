//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface CACentralTableViewCell : UITableViewCell
{
    UILabel *_deviceNameLabel;
    UILabel *_connectionStatusLabel;
    UILabel *_inputLabel;
    UILabel *_slashLabel;
    UILabel *_outputLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_labelConstraints;
    NSArray *_activityHConstraints;
    NSArray *_activityVConstraints;
}

@property(retain, nonatomic) NSArray *activityVConstraints; // @synthesize activityVConstraints=_activityVConstraints;
@property(retain, nonatomic) NSArray *activityHConstraints; // @synthesize activityHConstraints=_activityHConstraints;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *outputLabel; // @synthesize outputLabel=_outputLabel;
@property(retain, nonatomic) UILabel *slashLabel; // @synthesize slashLabel=_slashLabel;
@property(retain, nonatomic) UILabel *inputLabel; // @synthesize inputLabel=_inputLabel;
@property(retain, nonatomic) UILabel *connectionStatusLabel; // @synthesize connectionStatusLabel=_connectionStatusLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
- (void)dealloc;
- (void)stopIndicator;
- (void)startIndicator;
- (void)updateConstraints;
- (void)createInitialConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

