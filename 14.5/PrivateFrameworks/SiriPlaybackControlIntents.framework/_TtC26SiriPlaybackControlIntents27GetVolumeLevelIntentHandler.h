//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/GetVolumeLevelIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents27GetVolumeLevelIntentHandler : NSObject <GetVolumeLevelIntentHandling>
{
    MISSING_TYPE *deviceSelector;
    MISSING_TYPE *analyticsService;
    MISSING_TYPE *playbackController;
    MISSING_TYPE *deviceState;
    MISSING_TYPE *aceServiceHelper;
}

- (void).cxx_destruct;
- (void)confirmGetVolumeLevel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDeviceForGetVolumeLevel:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleGetVolumeLevel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

