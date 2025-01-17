//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, __CFN_TaskMetrics;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding>
{
    __CFN_TaskMetrics *__metrics;
}

+ (id)new;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
@property(readonly) unsigned long long redirectCount;
@property(readonly, copy) NSDateInterval *taskInterval;
@property(readonly, copy) NSArray *transactionMetrics;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

