//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray;
@protocol MFCaptionLabelDataSource;

@interface MFCaptionLabel : UILabel
{
    _Bool _needsLabelUpdate;
    _Bool _preventAutoUpdatingLabel;
    id <MFCaptionLabelDataSource> _dataSource;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSArray *_fromSenders;
    NSArray *_otherSigners;
}

+ (id)attributedStringsCache;
- (void).cxx_destruct;
@property(nonatomic) _Bool preventAutoUpdatingLabel; // @synthesize preventAutoUpdatingLabel=_preventAutoUpdatingLabel;
@property(retain, nonatomic) NSArray *otherSigners; // @synthesize otherSigners=_otherSigners;
@property(retain, nonatomic) NSArray *fromSenders; // @synthesize fromSenders=_fromSenders;
@property(retain, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(retain, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(nonatomic) __weak id <MFCaptionLabelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_formattedAttributedString;
- (id)_whitespaceStringWithWidth:(double)arg1;
- (id)_chevronImage;
- (id)_chevronAttributedString;
- (void)updateLabelNow;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (void)_setNeedsLabelUpdate;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

