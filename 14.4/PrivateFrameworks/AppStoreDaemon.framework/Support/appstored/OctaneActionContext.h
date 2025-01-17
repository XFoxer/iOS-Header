//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface OctaneActionContext : NSObject
{
    NSString *_bundleID;
    NSXPCConnection *_connection;
    NSString *_logKey;
    unsigned long long _transactionID;
}

+ (id)contextWithBundleID:(id)arg1 transactionID:(unsigned long long)arg2;
+ (id)contextWithBundleID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)init;

@end

