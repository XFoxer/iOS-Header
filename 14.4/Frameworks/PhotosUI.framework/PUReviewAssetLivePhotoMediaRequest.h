//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUReviewAssetCancelableMediaRequest-Protocol.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>
{
    int __liveRequestID;
}

@property(readonly, nonatomic) int _liveRequestID; // @synthesize _liveRequestID=__liveRequestID;
- (void)cancelRequest;
- (id)initLivePhotoRequestID:(int)arg1;

@end

