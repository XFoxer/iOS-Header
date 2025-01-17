//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentInput : NSObject
{
    UIImage *_currentPreviewImage;
    NSData *_knownAdjustmentData;
    long long _adjustmentBaseVersion;
    NSURL *_baseImageFileURL;
    NSURL *_baseVideoFileURL;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setBaseVideoFileURL:) NSURL *baseVideoFileURL; // @synthesize baseVideoFileURL=_baseVideoFileURL;
@property(nonatomic, setter=_setBaseImageFileURL:) NSURL *baseImageFileURL; // @synthesize baseImageFileURL=_baseImageFileURL;
@property(nonatomic, setter=_setBaseImageVersion:) long long adjustmentBaseVersion; // @synthesize adjustmentBaseVersion=_adjustmentBaseVersion;
@property(retain, nonatomic, setter=_setKnownAdjustmentData:) NSData *knownAdjustmentData; // @synthesize knownAdjustmentData=_knownAdjustmentData;
@property(retain, nonatomic, setter=_setCurrentPreviewImage:) UIImage *currentPreviewImage; // @synthesize currentPreviewImage=_currentPreviewImage;

@end

