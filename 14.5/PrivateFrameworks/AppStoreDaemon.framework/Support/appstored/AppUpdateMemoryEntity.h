//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface AppUpdateMemoryEntity : SQLiteMemoryEntity <NSCopying>
{
    NSString *_bundleID;
    NSNumber *_itemID;
    NSNumber *_evid;
    long long _parentalControlsRank;
    NSDate *_releaseDate;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
- (id)_zuluDateFormatter;
- (id)_appsAppleDictionary:(id)arg1;
- (long long)_parentalControlsRank:(id)arg1;
- (id)_parentalControlsName:(id)arg1;
- (long long)_deviceFamilies:(id)arg1;
- (void)_importFromDictionary:(id)arg1;
- (id)_externalVersionIdentifier:(id)arg1;
- (id)_buyParams:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) long long softwarePlatform;
- (void)setUpdateState:(long long)arg1;
@property(nonatomic, getter=isPerDevice) _Bool perDevice;
- (void)setMetricsData:(id)arg1;
@property(nonatomic) NSDate *installDate;
@property(nonatomic, getter=isCodeSignatureUpdate) _Bool codeSignatureUpdate;
@property(nonatomic, getter=isBackground) _Bool background;
@property(nonatomic, getter=isOffloaded) _Bool offloaded;
- (_Bool)runsOnIntel;
- (_Bool)runsOnAppleSilicon;
- (_Bool)requiresRosetta;
- (id)rawUpdateDictionary;
@property(readonly, nonatomic) NSString *parentalControlsName;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(readonly, nonatomic) NSDate *currentVersionReleaseDate;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)init;
- (id)purchase_purchaseInfoForUpdateUserInitiated:(_Bool)arg1;

@end

