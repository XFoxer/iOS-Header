//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPAbstractMutableLargeArraySegment.h>

@interface TSPMutableLargeNumberArraySegment : TSPAbstractMutableLargeArraySegment
{
}

- (void)loadFromMessage:(const struct LargeNumberArraySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeNumberArraySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;

@end

