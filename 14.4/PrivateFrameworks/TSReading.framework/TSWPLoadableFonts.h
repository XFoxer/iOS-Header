//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface TSWPLoadableFonts : NSObject
{
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (void)p_loadFontWithInfo:(id)arg1;
- (void)unregisterFontsForGroup:(id)arg1;
- (void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(_Bool)arg4 backgroundLoad:(_Bool)arg5;
- (void)loadFontsForGroup:(id)arg1;
- (void)loadFontWithName:(id)arg1;
- (void)loadAll;
- (void)backgroundLoadAll;
- (void)resumeBackgroundLoading;
- (void)pauseBackgroundLoading;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

