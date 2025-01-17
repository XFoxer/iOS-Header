//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, CNPostalAddress, MKWalletMerchantStylingInfo, NSDate, NSString, NSURL;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    int _resultProviderIdentifier;
    unsigned long long _identifier;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_url;
    double _locationLatitude;
    double _locationLongitude;
    CNPostalAddress *_postalAddress;
    NSURL *_heroImageURL;
    NSString *_heroImageAttributionName;
    long long _category;
    NSString *_detailedCategory;
    MKWalletMerchantStylingInfo *_stylingInfo;
    NSURL *_businessChatURL;
    NSDate *_lastProcessedDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)arg1;
+ (void)deleteFromCloudStoreRecord:(id)arg1 codingType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *lastProcessedDate; // @synthesize lastProcessedDate=_lastProcessedDate;
@property(copy, nonatomic) NSURL *businessChatURL; // @synthesize businessChatURL=_businessChatURL;
@property(retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo; // @synthesize stylingInfo=_stylingInfo;
@property(copy, nonatomic) NSString *detailedCategory; // @synthesize detailedCategory=_detailedCategory;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *heroImageAttributionName; // @synthesize heroImageAttributionName=_heroImageAttributionName;
@property(copy, nonatomic) NSURL *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property(copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(copy, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int resultProviderIdentifier; // @synthesize resultProviderIdentifier=_resultProviderIdentifier;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)_jsonEncodedPostalAddressString;
- (unsigned long long)hash;
- (_Bool)isEqualToMapsMerchant:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(copy, nonatomic) CLLocation *location;
- (_Bool)hasCloudArchivableDeviceData;
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (id)jsonRepresentation;

@end

