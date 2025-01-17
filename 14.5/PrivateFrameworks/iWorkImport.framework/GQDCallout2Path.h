//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDCallout2Path : GQDPath
{
    struct CGSize mSize;
    double mCornerRadius;
    struct CGPoint mTailPosition;
    double mTailSize;
    _Bool mTailAtCenter;
}

- (_Bool)tailAtCenter;
- (double)tailSize;
- (struct CGPoint)tailPosition;
- (double)cornerRadius;
- (struct CGSize)size;
- (struct CGPath *)createBezierPath;
- (struct CGPoint)tailCenter;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

