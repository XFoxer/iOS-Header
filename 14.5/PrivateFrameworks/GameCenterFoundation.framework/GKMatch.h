//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKSessionDelegate-Protocol.h>
#import <GameCenterFoundation/GKSessionPrivateDelegate-Protocol.h>

@class GKConnection, GKSession, GKThreadsafeDictionary, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol GKMatchDelegate, GKMatchDelegatePrivate, OS_dispatch_queue;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>
{
    unsigned char _version;
    _Bool _needHostScore;
    _Bool _hostScoreForQuery;
    _Bool _recentlyBecameActive;
    unsigned int _packetSequenceNumber;
    GKThreadsafeDictionary *_playersByIdentifier;
    NSMutableSet *_connectedPlayerIDs;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    id <GKMatchDelegate> _delegate;
    GKSession *_session;
    GKConnection *_connection;
    unsigned long long _expectedPlayerCount;
    NSMutableDictionary *_guestConnections;
    NSMutableDictionary *_guestSessions;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    id <GKMatchDelegatePrivate> _inviteDelegateWeak;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
    NSString *_rematchID;
    long long _rematchCount;
    NSDictionary *_networkStatistics;
    NSMutableDictionary *_hostScores;
    CDUnknownBlockType _chooseHostCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recentlyBecameActive; // @synthesize recentlyBecameActive=_recentlyBecameActive;
@property(copy, nonatomic) CDUnknownBlockType chooseHostCompletion; // @synthesize chooseHostCompletion=_chooseHostCompletion;
@property(nonatomic) _Bool hostScoreForQuery; // @synthesize hostScoreForQuery=_hostScoreForQuery;
@property(nonatomic) _Bool needHostScore; // @synthesize needHostScore=_needHostScore;
@property(retain, nonatomic) NSMutableDictionary *hostScores; // @synthesize hostScores=_hostScores;
@property(retain, nonatomic) NSDictionary *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property(nonatomic) long long rematchCount; // @synthesize rematchCount=_rematchCount;
@property(retain, nonatomic) NSString *rematchID; // @synthesize rematchID=_rematchID;
@property(retain, nonatomic) NSMutableArray *opponentIDs; // @synthesize opponentIDs=_opponentIDs;
@property(retain, nonatomic) NSMutableDictionary *playerPushTokens; // @synthesize playerPushTokens=_playerPushTokens;
@property(nonatomic) unsigned int packetSequenceNumber; // @synthesize packetSequenceNumber=_packetSequenceNumber;
@property(nonatomic) __weak id <GKMatchDelegatePrivate> inviteDelegate; // @synthesize inviteDelegate=_inviteDelegateWeak;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(retain, nonatomic) NSMutableArray *reinvitedPlayers; // @synthesize reinvitedPlayers=_reinvitedPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerEventQueues; // @synthesize playerEventQueues=_playerEventQueues;
@property(retain, nonatomic) NSMutableDictionary *guestSessions; // @synthesize guestSessions=_guestSessions;
@property(retain, nonatomic) NSMutableDictionary *guestConnections; // @synthesize guestConnections=_guestConnections;
@property(readonly, nonatomic) unsigned long long expectedPlayerCount; // @synthesize expectedPlayerCount=_expectedPlayerCount;
@property(retain, nonatomic) GKConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) GKSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue; // @synthesize stateChangeQueue=_stateChangeQueue;
@property(retain, nonatomic) NSMutableSet *connectedPlayerIDs; // @synthesize connectedPlayerIDs=_connectedPlayerIDs;
@property(retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
- (id)dataFromBase64String:(id)arg1;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (_Bool)shouldStartRelay:(id)arg1;
- (void)preemptRelay:(id)arg1;
- (void)initRelayResponse:(id)arg1 player:(id)arg2;
- (void)acceptRelayResponse:(id)arg1 player:(id)arg2;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)relayPush:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (id)playerForSession:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (id)stringForGKPeerConnectionState:(int)arg1;
- (id)stringForGKPlayerConnectionState:(long long)arg1;
- (void)sendHostScoreAsQuery:(_Bool)arg1;
- (void)calculateHostScore;
- (_Bool)selectHostIfRequestedAndAllScored;
- (_Bool)haveAllHostScores;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;
- (void)chooseBestHostingPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)chooseBestHostPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)sendConnectingStateCallbackToDelegate:(id)arg1 forPlayers:(id)arg2;
- (void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)updateStateForPlayer:(id)arg1 state:(long long)arg2;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)sendQueuedStatesAndPackets;
- (void)sendData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3;
- (void)_delegate:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromPlayer:(id)arg4;
- (void)queueData:(id)arg1 withEventQueueForPlayer:(id)arg2 forRecipient:(id)arg3;
- (id)peerFromPlayer:(id)arg1;
- (id)playerFromPeer:(id)arg1;
- (void)addPlayers:(id)arg1;
- (id)voiceChatWithName:(id)arg1;
- (void)clearSession;
- (void)disconnect;
- (void)disconnectGuestSessions;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (void)sendVersionData:(unsigned char)arg1;
- (_Bool)sendInviteData:(id)arg1 error:(id *)arg2;
- (_Bool)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id *)arg3;
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id *)arg4;
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id *)arg4;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (void)inviteeComboMatched:(long long)arg1;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5;
- (void)updateRematchID;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)withEventQueueForPlayer:(id)arg1 create:(CDUnknownBlockType)arg2 perform:(CDUnknownBlockType)arg3;
- (void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(_Bool)arg2 perform:(CDUnknownBlockType)arg3;
- (void)withEventQueueForPlayer:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (id)nearbyConnectionData;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)localPlayerDidChange:(id)arg1;
- (void)dealloc;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <GKMatchDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)connected:(id)arg1;
- (id)allIDs;
- (id)playerIDs;
- (id)guestPlayers;
@property(readonly, nonatomic) NSArray *players;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

