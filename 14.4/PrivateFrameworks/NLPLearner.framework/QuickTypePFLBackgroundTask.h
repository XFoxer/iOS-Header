//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLBackgroundTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLBackgroundTask : MLBackgroundTask
{
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
+ (Class)taskRunnerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

