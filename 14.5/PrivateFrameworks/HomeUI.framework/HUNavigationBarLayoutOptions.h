//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@interface HUNavigationBarLayoutOptions : NSObject <NSCopying>
{
    double _topMargin;
    double _bottomMargin;
    double _height;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3;
@property(nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property(nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) double trailingMargin;
@property(readonly, nonatomic) double leadingMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end

