//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AlternativeInfo : NSObject
{
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSNumber *_isFromDevice;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *originalScore; // @synthesize originalScore=_originalScore;
@property(copy, nonatomic) NSNumber *originalRank; // @synthesize originalRank=_originalRank;
@property(copy, nonatomic) NSNumber *isFromDevice; // @synthesize isFromDevice=_isFromDevice;
@property(copy, nonatomic) NSNumber *combinedScore; // @synthesize combinedScore=_combinedScore;
@property(copy, nonatomic) NSNumber *combinedRank; // @synthesize combinedRank=_combinedRank;

@end

