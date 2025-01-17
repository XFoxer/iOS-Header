//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary, _EXExtensionPoint;

__attribute__((visibility("hidden")))
@interface EXExtensionPointEnumerator : NSEnumerator
{
    NSDictionary *_extensionPoints;
    NSEnumerator *_extensionPointsKeyEnumerator;
    NSDictionary *_currentExtensionPointDict;
    _EXExtensionPoint *_currentExtensionPoint;
}

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly) _EXExtensionPoint *currentExtensionPoint; // @synthesize currentExtensionPoint=_currentExtensionPoint;
@property(readonly) NSDictionary *currentExtensionPointDict; // @synthesize currentExtensionPointDict=_currentExtensionPointDict;
@property(readonly) NSEnumerator *extensionPointsKeyEnumerator; // @synthesize extensionPointsKeyEnumerator=_extensionPointsKeyEnumerator;
@property(readonly) NSDictionary *extensionPoints; // @synthesize extensionPoints=_extensionPoints;
- (id)nextObject;
- (id)translateXPCCacheDictionary:(id)arg1;
- (id)initWithCacheURLs:(id)arg1;

@end

