//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFPasswordListSectionIdentifier : NSObject
{
    unsigned long long _type;
    NSString *_headerText;
    NSString *_footerText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 headerText:(id)arg2 footerText:(id)arg3;
- (id)initWithType:(unsigned long long)arg1;

@end

