//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemViewModel : NSObject
{
    NSArray *_values;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)stringsForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4;

@end

