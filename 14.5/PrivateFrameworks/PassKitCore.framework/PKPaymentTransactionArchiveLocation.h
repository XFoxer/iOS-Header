//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKCloudStoreZone;

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _archived;
    unsigned long long _type;
    PKCloudStoreZone *_cloudStoreZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // @synthesize cloudStoreZone=_cloudStoreZone;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToArchiveLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 archived:(_Bool)arg2 cloudStoreZone:(id)arg3;

@end

