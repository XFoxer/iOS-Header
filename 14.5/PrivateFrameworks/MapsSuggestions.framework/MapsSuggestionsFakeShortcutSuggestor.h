//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor-Protocol.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor>
{
    struct ReadWriteQueue _rwQueue;
    NSArray *_configuredResults;
    NSError *_configuredError;
    unsigned long long _calledPropose;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)calledRequestSuggest;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initFromResourceDepot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

