//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupLayout : NSObject
{
    NSMutableArray *_columns;
    double _imageMarginRight;
    struct UIEdgeInsets _metadataColumnEdgeInsets;
    double _metadataColumnMinHeight;
    double _tallestNonMetadataColumnHeight;
}

+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;
+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets metadataColumnEdgeInsets; // @synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)topPaddingForViewElement:(id)arg1;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;
- (double)columnSpacingForColumnIdentifier:(long long)arg1;
- (double)bottomPaddingForViewElement:(id)arg1;
- (id)initWithLockup:(id)arg1 context:(id)arg2;

@end

