//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTrackingRequest.h>

@interface VNTrackRectangleRequest : VNTrackingRequest
{
}

+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (id)initWithRectangleObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRectangleObservation:(id)arg1;

@end

