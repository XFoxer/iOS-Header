//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSULRUCache;

@interface TSWPFontCache : NSObject
{
    TSULRUCache *_fontCache;
    NSArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
+ (id)_singletonAlloc;
- (void)p_FontWasDownloaded:(id)arg1;
- (id)availableMembersOfFontFamily:(id)arg1;
- (id)displayNameForFontFamily:(id)arg1;
- (id)sortedFontFamilyEntriesForStylesheet:(id)arg1;
- (id)sortedFontFamilies;
- (id)p_excludedFamilyNames;
- (struct __CTFont *)_createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3;
- (struct __CTFont *)createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3 attributes:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

