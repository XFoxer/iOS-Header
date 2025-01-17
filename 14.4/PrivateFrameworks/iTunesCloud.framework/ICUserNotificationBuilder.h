//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying>
{
    NSMutableDictionary *_userNotificationDictionary;
    long long _alertLevel;
    double _timeoutInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) long long alertLevel; // @synthesize alertLevel=_alertLevel;
- (void)_setBoolValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *otherButtonTitle;
@property(copy, nonatomic) NSString *message;
@property(nonatomic) _Bool forcesModalAppearance;
@property(nonatomic) _Bool displaysAsTopMost;
@property(nonatomic) _Bool displaysActionButtonOnLockScreen;
@property(copy, nonatomic) NSString *defaultButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle;
@property(nonatomic) _Bool allowInCar;
- (struct __CFUserNotification *)createCFUserNotification;
- (id)initWithStoreDialog:(id)arg1;
- (id)init;

@end

