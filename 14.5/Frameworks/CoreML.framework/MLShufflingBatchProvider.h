//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>

@protocol MLBatchProvider;

@interface MLShufflingBatchProvider : NSObject <MLBatchProvider>
{
    struct vector<long, std::__1::allocator<long>> indices;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomNumberGenerator;
    id <MLBatchProvider> _batchProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) id <MLBatchProvider> batchProvider; // @synthesize batchProvider=_batchProvider;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (void)shuffle;
- (id)initWithBatchProvider:(id)arg1 seed:(id)arg2;

@end

