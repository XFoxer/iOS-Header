//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKContentRuleListStore;

@interface _WKUserContentExtensionStore : NSObject <WKObject>
{
    struct RetainPtr<WKContentRuleListStore> _contentRuleListStore;
}

+ (id)storeWithURL:(id)arg1;
+ (id)defaultStore;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WKContentRuleListStore *_contentRuleListStore;
- (id)_initWithWKContentRuleListStore:(id)arg1;
- (void)_invalidateContentExtensionVersionForIdentifier:(id)arg1;
- (void)_removeAllContentExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

