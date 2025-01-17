//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupKit/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CUAuthenticatableServer <NSObject>
@property(nonatomic) int passwordType;
@property(copy, nonatomic) NSString *password;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType authShowPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authHidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@end

