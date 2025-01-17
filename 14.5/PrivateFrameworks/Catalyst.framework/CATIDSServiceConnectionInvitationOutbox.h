//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CATIDSServiceConnectionInvitationOutboxDelegate, CATNetworkPowerPrimitives;

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionInvitationOutbox : NSObject
{
    id <CATNetworkPowerPrimitives> mNetworkPowerPrimitives;
    NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;
    NSMutableArray *mInvitationRequestQueue;
    _Bool mIsActive;
    id <CATIDSServiceConnectionInvitationOutboxDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CATIDSServiceConnectionInvitationOutboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceInvitationQueue;
- (void)cancelAllInvitations;
- (void)cancelInvitationWithIdentifier:(id)arg1;
- (void)receiveRejectForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 error:(id)arg4;
- (void)receiveAcceptForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3;
- (void)suspend;
- (void)resume;
- (void)beginInvitationWithIdentifier:(id)arg1 appleID:(id)arg2 userInfo:(id)arg3;
- (id)initWithNetworkPowerPrimitives:(id)arg1;
- (void)dealloc;

@end

