//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject
{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (_Bool)matchesURL:(id)arg1 parameters:(id *)arg2;
- (_Bool)matchesURL:(id)arg1;
- (id)nonParameterCharacterSet;
- (void)dealloc;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)initWithString:(id)arg1;

@end

