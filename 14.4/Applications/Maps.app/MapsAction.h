//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsAction : NSObject
{
    _Bool _needsUserLocation;
    double _userLocationDesiredAccuracy;
}

@property(readonly, nonatomic) double userLocationDesiredAccuracy; // @synthesize userLocationDesiredAccuracy=_userLocationDesiredAccuracy;
@property(readonly, nonatomic) _Bool needsUserLocation; // @synthesize needsUserLocation=_needsUserLocation;
@property(readonly, nonatomic) _Bool shouldResetUI;
@property(readonly, nonatomic) _Bool forceEndNavigation;
@property(readonly, nonatomic) _Bool isCompatibleWithRestorationTask;
@property(readonly, nonatomic) _Bool isCompatibleWithNavigation;
- (void)setUserLocationAccuracy:(double)arg1;

@end

