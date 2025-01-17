//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding>
{
    double _createdAt;
    CDStruct_d1a7ebee _kind;
    NSString *_bundleId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)refresh;
- (_Bool)isValidForRequest:(CDStruct_d1a7ebee)arg1 client:(id)arg2;
- (void)encodeWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2;
- (id)init;

@end

