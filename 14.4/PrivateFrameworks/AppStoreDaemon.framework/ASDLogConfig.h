//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (_Bool)_deviceIsRunningSeedBuild;
+ (_Bool)_deviceIsRunningInternalOrSeedBuild;
+ (_Bool)_deviceIsRunningInternalBuild;
+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedDaemonConfig;
+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool shouldLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property(readonly, nonatomic) _Bool debugLogsEnabled;
- (id)init;

@end

