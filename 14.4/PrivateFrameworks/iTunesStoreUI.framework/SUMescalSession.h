//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _complete;
}

- (void)_teardownSession;
- (id)_newDataWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)primeForAccountCreationWithData:(id)arg1 error:(id *)arg2;
@property(readonly, getter=isComplete) _Bool complete;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

