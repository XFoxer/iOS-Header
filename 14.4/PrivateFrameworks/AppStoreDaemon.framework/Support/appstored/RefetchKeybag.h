//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ApplicationProxy, NSString;

@interface RefetchKeybag : NSObject
{
    ApplicationProxy *_application;
    AMSProcessInfo *_clientInfo;
    NSString *_logKey;
}

- (void).cxx_destruct;
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
- (id)_performAuthorizationForAccount:(id)arg1;
- (id)_performAuthenticationForAccount:(id)arg1;
- (id)_buildDialogRequest;
- (id)_buildAuthenticateRequestForAccount:(id)arg1;
- (void)performRefetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)performRefetch;
- (id)initWithApplication:(id)arg1;
- (id)init;

@end

