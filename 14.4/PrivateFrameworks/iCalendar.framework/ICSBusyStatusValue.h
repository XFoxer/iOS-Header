//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSBusyStatusValue : ICSPredefinedValue
{
}

+ (id)busyStatusTypeFromCode:(int)arg1;
+ (id)busyStatusValueFromICSString:(id)arg1;
- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

