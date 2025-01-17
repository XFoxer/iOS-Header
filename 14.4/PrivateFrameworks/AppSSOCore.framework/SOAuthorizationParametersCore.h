//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SOAuthorizationParametersCore : NSObject
{
    _Bool _useInternalExtensions;
    NSString *_operation;
    NSURL *_url;
    NSDictionary *_httpHeaders;
    NSData *_httpBody;
    NSData *_auditTokenData;
    long long _responseCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) _Bool useInternalExtensions; // @synthesize useInternalExtensions=_useInternalExtensions;
@property(retain, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(retain, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
- (id)init;

@end

