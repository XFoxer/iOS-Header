//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HDDatabaseCorruptionTTRPromptDataSource;

@interface HDDatabaseCorruptionTTRPrompter : NSObject
{
    id <HDDatabaseCorruptionTTRPromptDataSource> _dataSource;
    CDUnknownBlockType _unitTest_willPresentTTRAlertHandler;
}

+ (id)defaultPrompterWithProfile:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType unitTest_willPresentTTRAlertHandler; // @synthesize unitTest_willPresentTTRAlertHandler=_unitTest_willPresentTTRAlertHandler;
- (id)_defaultKeyForSQLite:(_Bool)arg1 databaseType:(long long)arg2 suffix:(id)arg3;
- (void)_popAlertWithRadarDescription:(id)arg1;
- (void)_persistDatabaseCorruptionContext:(id)arg1 isSQLite:(_Bool)arg2 databaseType:(long long)arg3;
- (id)_persistedDatabaseCorruptionContextForSQLite:(_Bool)arg1 databaseType:(long long)arg2;
- (void)_persistDatabaseIdentifierAndBuild:(id)arg1 isSQLite:(_Bool)arg2 databaseType:(long long)arg3;
- (id)_currentDatabaseCorruptionContextForError:(id)arg1;
- (id)_persistedDatabaseIdentifierAndBuildFromPriorPromptForSQLite:(_Bool)arg1 databaseType:(long long)arg2;
- (id)_currentDatabaseIdentifierAndBuildString;
- (_Bool)_deviceSupportsCorruptionPrompt;
- (void)_promptTTRWithDatabaseType:(long long)arg1 isSQLite:(_Bool)arg2 description:(id)arg3 error:(id)arg4;
- (void)promptTTRForHFDCorruptionWithFailureType:(long long)arg1 corruptionError:(id)arg2;
- (void)promptTTRForSQLiteCorruptionWithDatabaseType:(long long)arg1 corruptionError:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

