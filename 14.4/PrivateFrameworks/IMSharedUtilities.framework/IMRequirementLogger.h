//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMRequirementLogger : NSObject
{
    unsigned char _loggingLevel;
    _Bool _throwFailures;
    const char *_categoryOverride;
}

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
@property _Bool throwFailures; // @synthesize throwFailures=_throwFailures;
@property unsigned char loggingLevel; // @synthesize loggingLevel=_loggingLevel;
- (struct IMRequirementFailed_t)requirementDidFail:(const char *)arg1;
- (void)dealloc;
@property const char *categoryOverride; // @synthesize categoryOverride=_categoryOverride;
- (id)description;
- (void)updateSettingsFromUserDefaults;
- (id)init;

@end

