//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLComponents, _LSAppLinkOpenState;

__attribute__((visibility("hidden")))
@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;
    unsigned long long _limit;
    _LSAppLinkOpenState *_state;
}

+ (_Bool)canHandleURLComponents:(id)arg1;
+ (id)plugInClasses;
- (void).cxx_destruct;
@property(retain) _LSAppLinkOpenState *state; // @synthesize state=_state;
@property unsigned long long limit; // @synthesize limit=_limit;
@property(retain) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end

