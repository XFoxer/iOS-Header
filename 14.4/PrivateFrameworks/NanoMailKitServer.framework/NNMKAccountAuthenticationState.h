//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNMKAccountAuthenticationState : NSObject
{
    NSString *_accountId;
    unsigned long long _state;
    NSString *_displayName;
    NSString *_subsectionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subsectionId; // @synthesize subsectionId=_subsectionId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;

@end

