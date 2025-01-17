//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsitePolicies> _websitePolicies;
}

+ (id)defaultPreferences;
- (unsigned long long)_mouseEventPolicy;
- (void)_setMouseEventPolicy:(unsigned long long)arg1;
@property(nonatomic) long long preferredContentMode;
@property(nonatomic) _Bool allowsContentJavaScript;
@property(readonly) struct Object *_apiObject;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(_Bool)arg1;
- (_Bool)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (id)_customNavigatorPlatform;
- (void)_setCustomNavigatorPlatform:(id)arg1;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1;
- (id)_customUserAgent;
- (void)_setCustomUserAgent:(id)arg1;
- (void)_setUserContentController:(id)arg1;
- (id)_userContentController;
- (void)_setWebsiteDataStore:(id)arg1;
- (id)_websiteDataStore;
- (void)_setCustomHeaderFields:(id)arg1;
- (id)_customHeaderFields;
- (unsigned long long)_popUpPolicy;
- (void)_setPopUpPolicy:(unsigned long long)arg1;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1;
- (long long)_autoplayPolicy;
- (void)_setAutoplayPolicy:(long long)arg1;
- (unsigned long long)_allowedAutoplayQuirks;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (_Bool)_contentBlockersEnabled;
- (void)_setContentBlockersEnabled:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

