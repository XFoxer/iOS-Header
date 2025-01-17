//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDAppMetadata-Protocol.h>
#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    _Bool _skipIfInstalled;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_bundleID;
    NSNumber *_downloaderID;
    NSNumber *_externalVersionID;
    NSNumber *_itemID;
    NSNumber *_previousExternalVersionID;
    NSString *_previousVariantID;
    NSNumber *_purchaserID;
    NSString *_redownloadParams;
}

+ (_Bool)supportsSecureCoding;
+ (id)metadataFromStoreMetadata:(id)arg1;
- (void).cxx_destruct;
@property _Bool skipIfInstalled; // @synthesize skipIfInstalled=_skipIfInstalled;
@property(copy) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(copy) NSNumber *purchaserID; // @synthesize purchaserID=_purchaserID;
@property(copy) NSString *previousVariantID; // @synthesize previousVariantID=_previousVariantID;
@property(copy) NSNumber *previousExternalVersionID; // @synthesize previousExternalVersionID=_previousExternalVersionID;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(copy) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long metadataType;
- (id)initWithStoreMetadata:(id)arg1;
- (id)initWithItemID:(id)arg1 externalVersionID:(id)arg2;
- (id)initWithItemID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

