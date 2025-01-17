//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSDictionary, NSString, NSURL;

@interface DDSAsset : NSObject
{
    NSDictionary *_attributes;
    NSURL *_localURL;
    unsigned long long _assetState;
    NSString *_dataType;
    NSString *_assetType;
    MAAsset *_maAsset;
    NSString *_debuggingID;
    NSString *_uniqueIdentifier;
}

+ (id)debuggingIDsForAssets:(id)arg1;
+ (id)uniqueIdentifierForMAAsset:(id)arg1;
+ (id)assetWithMAAsset:(id)arg1;
+ (id)asset;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *debuggingID; // @synthesize debuggingID=_debuggingID;
@property(retain, nonatomic) MAAsset *maAsset; // @synthesize maAsset=_maAsset;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long assetState; // @synthesize assetState=_assetState;
@property(readonly, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (_Bool)isEqualToAsset:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *assetUUID;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *installDate;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) unsigned long long contentVersion;
@property(readonly, nonatomic) unsigned long long compatibilityVersion;
- (void)_mergeAttributes:(id)arg1;
- (id)init;

@end

