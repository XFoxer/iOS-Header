//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    _Bool _shouldSendMutableContent;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_title;
    NSString *_titleLocalizationKey;
    NSArray *_titleLocalizationArgs;
    NSString *_subtitle;
    NSString *_subtitleLocalizationKey;
    NSArray *_subtitleLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSString *_soundName;
    NSArray *_desiredKeys;
    NSString *_category;
    NSString *_collapseIDKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)notificationInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *collapseIDKey; // @synthesize collapseIDKey=_collapseIDKey;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool shouldSendMutableContent; // @synthesize shouldSendMutableContent=_shouldSendMutableContent;
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSString *alertLaunchImage; // @synthesize alertLaunchImage=_alertLaunchImage;
@property(copy, nonatomic) NSString *alertActionLocalizationKey; // @synthesize alertActionLocalizationKey=_alertActionLocalizationKey;
@property(copy, nonatomic) NSArray *subtitleLocalizationArgs; // @synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs;
@property(copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSArray *titleLocalizationArgs; // @synthesize titleLocalizationArgs=_titleLocalizationArgs;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *alertLocalizationArgs; // @synthesize alertLocalizationArgs=_alertLocalizationArgs;
@property(copy, nonatomic) NSString *alertLocalizationKey; // @synthesize alertLocalizationKey=_alertLocalizationKey;
@property(copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_setCategoryNoValidate:(id)arg1;
- (void)_setShouldSendMutableContentNoValidate:(_Bool)arg1;
- (void)_setShouldSendContentAvailableNoValidate:(_Bool)arg1;
- (void)_setShouldBadgeNoValidate:(_Bool)arg1;
- (void)_setSoundNameNoValidate:(id)arg1;
- (void)_setAlertLaunchImageNoValidate:(id)arg1;
- (void)_setAlertActionLocalizationKeyNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setSubtitleNoValidate:(id)arg1;
- (void)_setTitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setTitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setTitleNoValidate:(id)arg1;
- (void)_setAlertLocalizationArgsNoValidate:(id)arg1;
- (void)_setAlertLocalizationKeyNoValidate:(id)arg1;
- (void)_setAlertBodyNoValidate:(id)arg1;

@end

