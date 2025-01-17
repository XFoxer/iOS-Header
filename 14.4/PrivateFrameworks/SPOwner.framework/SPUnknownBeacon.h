//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSUUID, SPDiscoveredAccessoryMetadata, SPHandle, SPUnknownProductInfo;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isIgnored;
    NSUUID *_identifier;
    NSArray *_beaconLocations;
    NSData *_advertisement;
    unsigned long long _type;
    SPDiscoveredAccessoryMetadata *_metadata;
    SPUnknownProductInfo *_productInfo;
    NSUUID *_beaconIdentifier;
    SPHandle *_handle;
    NSDate *_triggerDate;
    NSDate *_ignoresUntilDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *ignoresUntilDate; // @synthesize ignoresUntilDate=_ignoresUntilDate;
@property(copy, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic) _Bool isIgnored; // @synthesize isIgnored=_isIgnored;
@property(copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
@property(copy, nonatomic) SPUnknownProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSData *advertisement; // @synthesize advertisement=_advertisement;
@property(copy, nonatomic) NSArray *beaconLocations; // @synthesize beaconLocations=_beaconLocations;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

