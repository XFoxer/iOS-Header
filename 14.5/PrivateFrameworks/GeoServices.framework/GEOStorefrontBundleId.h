//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface GEOStorefrontBundleId : NSObject
{
    unsigned long long _identifier;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithBundleId:(id)arg1;
- (id)init;

@end

