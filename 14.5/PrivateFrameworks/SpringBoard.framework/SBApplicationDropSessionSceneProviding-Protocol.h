//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentity, NSString, SBApplication;

@protocol SBApplicationDropSessionSceneProviding <NSObject>
- (FBSSceneIdentity *)mostRecentSceneIdentityExcludingLiveScenesForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)preferredSceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 preferNewScene:(_Bool)arg3;
- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (_Bool)isApplicationActiveAndVisible:(SBApplication *)arg1;
@end

