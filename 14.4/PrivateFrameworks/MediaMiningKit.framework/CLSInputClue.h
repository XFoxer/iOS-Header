//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSClue.h>

@interface CLSInputClue : CLSClue
{
    _Bool _needsPreparation;
}

@property _Bool needsPreparation; // @synthesize needsPreparation=_needsPreparation;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)prepareIfNeeded;
- (id)init;

@end

