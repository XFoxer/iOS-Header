//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSOnboardingUtil : NSObject
{
}

+ (id)viewControllerForMediaType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)shouldShowOnboarding;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)markAsShown;

@end

