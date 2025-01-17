//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSArray, NSString, NSURL;

@interface CRKOpenURLRequest : CATTaskRequest
{
    _Bool _lockInApp;
    NSURL *_URL;
    NSString *_URLDisplayName;
    NSArray *_handlingBundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *handlingBundleIdentifiers; // @synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers;
@property(nonatomic) _Bool lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSString *URLDisplayName; // @synthesize URLDisplayName=_URLDisplayName;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

