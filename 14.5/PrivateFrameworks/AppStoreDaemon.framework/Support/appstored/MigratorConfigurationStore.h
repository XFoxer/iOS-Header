//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MigratorConfigurationStore : NSObject
{
    NSMutableDictionary *_configuration;
}

- (void).cxx_destruct;
- (id)_writeConfigurationToUserDefaultsRepresentation:(id)arg1;
- (id)_readConfigurationFromUserDefaultsRepresentation:(id)arg1;
- (void)writeConfiguration:(id)arg1;
- (void)willBeginMigratorType:(id)arg1;
- (void)synchronize:(_Bool)arg1;
- (_Bool)hasMigrations;
- (id)migrationsLeft;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)didCompleteMigratorType:(id)arg1;
- (void)clearMigrations;
- (id)init;

@end

