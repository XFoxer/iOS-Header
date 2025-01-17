//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAbsintheSession : NSObject
{
    void *_sessionRef;
    NSString *_servKey;
}

+ (id)defaultSession;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *servKey; // @synthesize servKey=_servKey;
@property(nonatomic) void *sessionRef; // @synthesize sessionRef=_sessionRef;
- (_Bool)_prepareContextWithBag:(id)arg1 error:(id *)arg2;
- (_Bool)verifyData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (_Bool)clearSession;
- (id)init;

@end

