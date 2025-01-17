//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding>
{
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
    NSMutableDictionary *_cloudRecordByZoneRecord;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord; // @synthesize cloudRecordByZoneRecord=_cloudRecordByZoneRecord;
- (long long)count;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (id)allObjects;
- (id)allItems;
- (void)applyCloudRecordDatabaseZone:(id)arg1;
- (void)addCloudRecord:(id)arg1;
- (id)descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 databaseIdentifier:(id)arg2;

@end

