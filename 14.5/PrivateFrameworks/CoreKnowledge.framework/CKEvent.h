//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CKEvent : NSObject
{
    NSString *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;

@end

