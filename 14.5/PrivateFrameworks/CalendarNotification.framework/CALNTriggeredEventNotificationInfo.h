//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKStructuredLocation, NSDate, NSDictionary, NSString, NSURL;

@interface CALNTriggeredEventNotificationInfo : NSObject
{
    _Bool _isAllDay;
    _Bool _hasSuggestedLocation;
    _Bool _eventHasAlarms;
    _Bool _allowsLocationAlerts;
    _Bool _forceDisplayOfNewTravelAdvisoryHypotheses;
    NSString *_title;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_eventOccurrenceID;
    NSString *_eventObjectID;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_legacyIdentifier;
    EKStructuredLocation *_preferredLocation;
    NSURL *_conferenceURL;
    NSURL *_mailtoURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool forceDisplayOfNewTravelAdvisoryHypotheses; // @synthesize forceDisplayOfNewTravelAdvisoryHypotheses=_forceDisplayOfNewTravelAdvisoryHypotheses;
@property(readonly, nonatomic) _Bool allowsLocationAlerts; // @synthesize allowsLocationAlerts=_allowsLocationAlerts;
@property(readonly, nonatomic) _Bool eventHasAlarms; // @synthesize eventHasAlarms=_eventHasAlarms;
@property(readonly, nonatomic) _Bool hasSuggestedLocation; // @synthesize hasSuggestedLocation=_hasSuggestedLocation;
@property(readonly, copy, nonatomic) NSURL *mailtoURL; // @synthesize mailtoURL=_mailtoURL;
@property(readonly, copy, nonatomic) NSURL *conferenceURL; // @synthesize conferenceURL=_conferenceURL;
@property(readonly, nonatomic) EKStructuredLocation *preferredLocation; // @synthesize preferredLocation=_preferredLocation;
@property(readonly, copy, nonatomic) NSString *legacyIdentifier; // @synthesize legacyIdentifier=_legacyIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // @synthesize eventRepresentationDictionary=_eventRepresentationDictionary;
@property(readonly, copy, nonatomic) NSString *eventObjectID; // @synthesize eventObjectID=_eventObjectID;
@property(readonly, copy, nonatomic) NSString *eventOccurrenceID; // @synthesize eventOccurrenceID=_eventOccurrenceID;
@property(readonly, copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *locationWithoutPrediction; // @synthesize locationWithoutPrediction=_locationWithoutPrediction;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(_Bool)arg6 eventID:(id)arg7 eventOccurrenceID:(id)arg8 eventObjectID:(id)arg9 eventRepresentationDictionary:(id)arg10 legacyIdentifier:(id)arg11 preferredLocation:(id)arg12 conferenceURL:(id)arg13 mailtoURL:(id)arg14 hasSuggestedLocation:(_Bool)arg15 eventHasAlarms:(_Bool)arg16 allowsLocationAlerts:(_Bool)arg17 forceDisplayOfNewTravelAdvisoryHypotheses:(_Bool)arg18;

@end

