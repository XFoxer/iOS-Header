//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface ICURLBagEnhancedAudioConfiguration : NSObject
{
    NSDictionary *_bagEnhancedAudioDictionary;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *bagEnhancedAudioDictionary; // @synthesize bagEnhancedAudioDictionary=_bagEnhancedAudioDictionary;
- (id)_urlForBagEnhancedAudioKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *prefetchSKDs;
@property(readonly, copy, nonatomic) NSURL *keyServerURL;
@property(readonly, copy, nonatomic) NSURL *certificateURL;
- (id)initWithBagEnhancedAudioDictionary:(id)arg1;

@end

