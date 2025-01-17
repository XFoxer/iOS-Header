//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUITracklistColumn : NSObject <NSCopying>
{
    long long _columnIdentifier;
    long long _contentAlignment;
    long long _headerAlignment;
    double _maximumWidthFraction;
    double _preferredWidth;
    _Bool _showsPreviewControl;
    _Bool _sizesToFit;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool sizesToFit; // @synthesize sizesToFit=_sizesToFit;
@property(nonatomic) _Bool showsPreviewControl; // @synthesize showsPreviewControl=_showsPreviewControl;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic) double maximumWidthFraction; // @synthesize maximumWidthFraction=_maximumWidthFraction;
@property(nonatomic) long long headerAlignment; // @synthesize headerAlignment=_headerAlignment;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long columnIdentifier; // @synthesize columnIdentifier=_columnIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setPreferredWidthForAttributedStrings:(id)arg1;

@end

