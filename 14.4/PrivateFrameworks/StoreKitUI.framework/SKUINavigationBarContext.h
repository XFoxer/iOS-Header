//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIResourceLoader, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarContext : NSObject
{
    SKUIClientContext *_clientContext;
    double _maximumNavigationBarWidth;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double maximumNavigationBarWidth; // @synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@end

