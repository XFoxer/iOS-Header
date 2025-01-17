//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>
{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;
    NSArray *_observedLocations;
    NSDate *_observedAt;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *observedAt; // @synthesize observedAt=_observedAt;
@property(copy, nonatomic) NSArray *observedLocations; // @synthesize observedLocations=_observedLocations;
@property(retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;

@end

