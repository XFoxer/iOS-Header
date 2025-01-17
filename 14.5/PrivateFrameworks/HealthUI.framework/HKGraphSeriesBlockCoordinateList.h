//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject
{
}

+ (id)coordinateListWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;
+ (id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (id)_coordinatesInChartableRange:(id)arg1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathEnd;
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathStart;
@property(readonly, nonatomic) long long numCoordinates;
@property(readonly, nonatomic) NSArray *coordinates;

@end

