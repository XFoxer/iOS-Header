//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GEOTransitDepartureSequence, GEOTransitIncident, GEOTransitSystem;

@protocol _MKInfoCardAnalyticsDelegate <NSObject>
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id <GEOTransitSystem>)arg4 transitDepartureSequence:(id <GEOTransitDepartureSequence>)arg5 transitCardCategory:(int)arg6 transitIncident:(id <GEOTransitIncident>)arg7 feedbackDelegateSelector:(int)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 actionURL:(NSString *)arg4 photoID:(NSString *)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(NSString *)arg2 feedbackDelegateSelector:(int)arg3;
@end

