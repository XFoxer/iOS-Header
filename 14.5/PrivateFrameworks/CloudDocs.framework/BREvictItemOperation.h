//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BREvictItemOperation : BROperation
{
    unsigned long long _section;
    NSURL *_url;
    CDUnknownBlockType _evictionCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType evictionCompletionBlock; // @synthesize evictionCompletionBlock=_evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)description;
- (id)initWithURL:(id)arg1;

@end

