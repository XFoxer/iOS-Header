//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDModelAsset;

@interface TDModelRenditionSpec : TDRenditionSpec
{
}

+ (id)fetchRequest;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processModelObjectsInDocument:(id)arg1;
- (void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned int *)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;

// Remaining properties
@property(retain, nonatomic) TDModelAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSSet *childRenditions; // @dynamic childRenditions;
@property(nonatomic) int modelAssetIndex; // @dynamic modelAssetIndex;

@end

