//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimer;
@protocol NTKMoonPhaseComplicationDisplay;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel>
{
    NSDate *_timeTravelDate;
    struct {
        unsigned int wantsPhaseName:1;
        unsigned int wantsPhaseNumber:1;
        unsigned int wantsEventAndDate:1;
        unsigned int wantsLocked:1;
        unsigned int wantsPaused:1;
    } _displayFlags;
    NSTimer *_afterEventTimer;
    _Bool _paused;
    _Bool _missedUpdateWhilePaused;
    NSString *_token;
    CLLocation *_location;
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)_afterEventTimerFired:(id)arg1;
- (void)_scheduleAfterEventTimer:(id)arg1;
- (void)_invalidateEventTimer;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_updateDisplayForced:(_Bool)arg1;
- (void)_asyncUpdateDisplay;
- (void)_updateDisplay;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)setShowsLockedUI:(_Bool)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) __weak id <NTKMoonPhaseComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end

