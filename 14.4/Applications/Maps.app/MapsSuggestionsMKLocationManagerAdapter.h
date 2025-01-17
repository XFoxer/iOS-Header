//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

#import "MKLocationManagerObserver-Protocol.h"
#import "MapsSuggestionsLocationUpdater-Protocol.h"

@class MKLocationManager, NSString;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsMKLocationManagerAdapter : MapsSuggestionsBaseLocationUpdater <MKLocationManagerObserver, MapsSuggestionsLocationUpdater>
{
    MKLocationManager *_mkLocationManager;
}

- (void).cxx_destruct;
- (void)locationManagerApprovalDidChange:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)onStopImplementation;
- (void)onStartImplementation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

