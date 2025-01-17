//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MPNowPlayingInfoLanguageOption : NSObject
{
    void *_mrLanguageOption;
}

@property(readonly, nonatomic) void *mrLanguageOption; // @synthesize mrLanguageOption=_mrLanguageOption;
- (_Bool)isEqualToLanguageOption:(id)arg1;
- (id)copyExternalRepresentation;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSArray *languageOptionCharacteristics; // @dynamic languageOptionCharacteristics;
@property(readonly, nonatomic) NSString *languageTag; // @dynamic languageTag;
@property(readonly, nonatomic) unsigned long long languageOptionType; // @dynamic languageOptionType;
- (_Bool)isAutomaticAudibleLanguageOption;
- (_Bool)isAutomaticLegibleLanguageOption;
- (id)initWithMRLanguageOption:(void *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;

@end

