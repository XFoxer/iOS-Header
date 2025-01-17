//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSLayoutRule-Protocol.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject <NSLayoutRule>
{
    NSArray *_stackedRects;
    double _spacing;
    long long _orientation;
}

+ (id)verticalStackWithRects:(id)arg1 spacing:(double)arg2;
+ (id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2;
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3;
@property(readonly) double spacing; // @synthesize spacing=_spacing;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

