//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPRuleOffset : NSObject <NSCopying>
{
    double _dX;
    double _dY;
}

+ (id)ruleOffset;
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;
- (struct CGSize)sizeValue;
- (struct CGPoint)pointValue;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDX:(double)arg1 dY:(double)arg2;

@end

