//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject
{
    _Bool _wasSplit;
    _Bool _reachedMinSplit;
    _Bool _wasFixed;
    CPLChangeBatch *_batch;
    unsigned long long _retryCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wasFixed; // @synthesize wasFixed=_wasFixed;
@property(nonatomic) _Bool reachedMinSplit; // @synthesize reachedMinSplit=_reachedMinSplit;
@property(nonatomic) _Bool wasSplit; // @synthesize wasSplit=_wasSplit;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (id)description;
- (id)batchesSplitForError;
- (id)lastAddedRecord;
- (void)incrementRetryCount;
- (void)addRecord:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

