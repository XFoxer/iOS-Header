//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSISEngine, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject
{
    struct CGPoint _cachedOrigin;
    UIView *_delegate;
    NSISEngine *_cacheEngine;
    unsigned long long _variableChangeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long variableChangeCount; // @synthesize variableChangeCount=_variableChangeCount;
@property(nonatomic) __weak NSISEngine *cacheEngine; // @synthesize cacheEngine=_cacheEngine;
@property(readonly, nonatomic) __weak UIView *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithDelegate:(id)arg1;

@end

