//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@protocol CCChartDataRow;

@interface CCChartDataRowBinding : NSDictionary
{
    id <CCChartDataRow> _dataRow;
}

- (void).cxx_destruct;
- (id)chartViewDataRowID;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
- (id)initWithChartDataRow:(id)arg1;

@end

