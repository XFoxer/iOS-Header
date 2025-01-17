//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerProductInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding>
{
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    NSString *_productCategory;
    NSString *_detailedProductCategory;
    NSString *_vendorName;
    NSString *_anonymizedIdentifier;
    NSNumber *_attachedToDevice;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice; // @synthesize attachedToDevice=_attachedToDevice;
@property(copy, nonatomic) NSString *anonymizedIdentifier; // @synthesize anonymizedIdentifier=_anonymizedIdentifier;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *detailedProductCategory; // @synthesize detailedProductCategory=_detailedProductCategory;
@property(copy, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

