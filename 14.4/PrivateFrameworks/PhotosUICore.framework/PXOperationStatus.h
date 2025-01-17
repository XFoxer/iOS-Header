//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSError;

@interface PXOperationStatus : NSObject <NSCopying>
{
    long long _state;
    double _progress;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2;
- (id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3;
- (id)init;

@end

