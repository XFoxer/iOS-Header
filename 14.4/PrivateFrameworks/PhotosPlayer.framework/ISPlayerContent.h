//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject
{
    _Bool _photoHasColorAdjustments;
    _Bool _photoIsOriginal;
    _Bool _supportsVitality;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_variationIdentifier;
    CDStruct_1b6d18a9 _photoTime;
    CDStruct_1b6d18a9 _videoDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *variationIdentifier; // @synthesize variationIdentifier=_variationIdentifier;
@property(readonly, nonatomic) _Bool supportsVitality; // @synthesize supportsVitality=_supportsVitality;
@property(readonly, nonatomic) _Bool photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) _Bool photoHasColorAdjustments; // @synthesize photoHasColorAdjustments=_photoHasColorAdjustments;
@property(readonly, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 photoHasColorAdjustments:(_Bool)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(_Bool)arg9;

@end

