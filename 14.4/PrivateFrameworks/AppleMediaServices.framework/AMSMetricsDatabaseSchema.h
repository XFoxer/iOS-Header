//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseSchema : NSObject
{
}

+ (void)migrateVersion3to4WithMigration:(id)arg1;
+ (void)migrateVersion2to3WithMigration:(id)arg1;
+ (void)migrateVersion1to2WithMigration:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;
+ (id)_containerURLForContainerId:(id)arg1;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)arg1;
+ (_Bool)_addSkipBackupAttribute:(_Bool)arg1 forURL:(id)arg2;
+ (_Bool)removeDatabaseForContainerId:(id)arg1;
+ (id)databasePathForContainerId:(id)arg1;
+ (_Bool)createOrUpdateSchemaUsingConnection:(id)arg1;

@end

