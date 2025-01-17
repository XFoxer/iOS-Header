//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection
{
    NSUUID *_uuid;
    _Bool _isUsingTokenService;
}

+ (void)invalidateCachedURLProperties;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsAppSupportURL;
+ (id)syncedRootURLs;
+ (id)syncedDocumentsURL;
+ (id)syncedDesktopURL;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURL;
+ (void)t_setMobileDocumentsURL:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (id)t_connectionForUUID:(id)arg1;
+ (id)secondaryConnection;
+ (id)secondaryConnectionIfExists;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (void)initialize;
- (void).cxx_destruct;
- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;

@end

