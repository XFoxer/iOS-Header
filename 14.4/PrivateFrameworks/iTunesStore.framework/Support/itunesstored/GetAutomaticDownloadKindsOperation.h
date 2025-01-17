//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSAuthenticationContext;

@interface GetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authContext;
    NSArray *_enabledDownloadKinds;
}

- (void)run;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSArray *enabledDownloadKinds;
- (void)dealloc;

@end

