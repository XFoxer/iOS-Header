//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>

@class NSDate, NSSet;

@protocol SGSuggestionsServiceURLsProtocol <_SGSuggestionsServiceBaseProtocol>
- (void)urlsFoundBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 excludingBundleIdentifiers:(NSSet *)arg3 limit:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
@end

