//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGSuggestionsService.h>

#import <CoreSuggestions/SGSuggestionsServiceMessagesProtocol-Protocol.h>

@class NSMutableDictionary, SGMessagesDaemonConnection;
@protocol SGMessagesSuggestionsServiceDelegate;

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol>
{
    id <SGMessagesSuggestionsServiceDelegate> _delegate;
    SGMessagesDaemonConnection *_messagesDaemonConnection;
    NSMutableDictionary *_previousMessages;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *previousMessages; // @synthesize previousMessages=_previousMessages;
@property(retain) SGMessagesDaemonConnection *messagesDaemonConnection; // @synthesize messagesDaemonConnection=_messagesDaemonConnection;
@property __weak id <SGMessagesSuggestionsServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isMessageEligibleForSuggestions:(id)arg1;
- (void)sendContextForMessage:(id)arg1;
- (void)setupContextIfNeededForConversation:(id)arg1;
- (id)_remoteSuggestionManager;
- (void)setManagerForTesting:(id)arg1;
- (id)init;

@end

