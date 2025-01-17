//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MIDINetworkHost : NSObject
{
    void *_imp;
}

+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3;
- (id)displayName;
- (id)addressAsText;
- (_Bool)hasSameAddressAs:(id)arg1;
- (void)setName:(id)arg1;
@property(readonly, nonatomic) NSString *netServiceDomain;
@property(readonly, nonatomic) NSString *netServiceName;
- (id)host;
@property(readonly, nonatomic) unsigned long long port;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (void)dealloc;
- (id)init;

@end

