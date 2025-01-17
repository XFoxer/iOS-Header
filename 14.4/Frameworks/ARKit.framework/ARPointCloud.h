//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface ARPointCloud : NSObject <NSSecureCoding>
{
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> _pointsVector;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> _identifiersVector;
    unsigned long long _count;
    const MISSING_TYPE **_points;
    const unsigned long long *_identifiers;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const unsigned long long *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) const MISSING_TYPE **points; // @synthesize points=_points;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

