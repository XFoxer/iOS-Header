//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKPendingOperationRecord : NSObject
{
    CDUnknownBlockType _operationHandler;
    CDUnknownBlockType _completionHandler;
    long long _errorCount;
}

+ (id)pendingOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType operationHandler; // @synthesize operationHandler=_operationHandler;

@end

