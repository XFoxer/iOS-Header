//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXPaths : NSObject
{
}

+ (id)trialFolderResourcePath;
+ (id)metricsRootDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)feedbackRootDirectory;
+ (id)focusModesAppScoresFile;
+ (id)uiCachesRootDirectory;
+ (id)clientModelCachesRootDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectoryFile:(id)arg1;
+ (void)createDataVault:(id)arg1;
+ (id)_getDirectoryCreating:(_Bool)arg1;
+ (id)appPredictionDirectory;
+ (void)createDirectoriesIfNeeded;

@end

