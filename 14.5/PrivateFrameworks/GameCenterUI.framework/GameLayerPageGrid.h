//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GameLayerPageGrid : NSObject
{
    MISSING_TYPE *columnWidth;
    MISSING_TYPE *rowHeight;
    MISSING_TYPE *interColumnSpacing;
    MISSING_TYPE *columnCount;
    MISSING_TYPE *minimumInsets;
    MISSING_TYPE *centeringInsets;
    MISSING_TYPE *representingWidth;
    MISSING_TYPE *columnSizeCategory;
    MISSING_TYPE *contentSizeCategory;
    MISSING_TYPE *horizontalSizeClass;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithWidth:(double)arg1 columnSizeCategory:(long long)arg2 maxColumns:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (id)initWithContainerSize:(struct CGSize)arg1 traitCollection:(id)arg2;
@property(nonatomic, readonly) struct UIEdgeInsets centeringInsets; // @synthesize centeringInsets;
@property(nonatomic, readonly) struct UIEdgeInsets minimumInsets; // @synthesize minimumInsets;
@property(nonatomic, readonly) long long columnCount; // @synthesize columnCount;
@property(nonatomic, readonly) double interColumnSpacing; // @synthesize interColumnSpacing;
@property(nonatomic, readonly) double columnWidth; // @synthesize columnWidth;

@end

