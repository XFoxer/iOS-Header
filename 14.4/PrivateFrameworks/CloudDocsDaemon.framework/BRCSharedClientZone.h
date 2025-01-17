//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCSharedServerZone, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedClientZone : BRCClientZone
{
    NSMutableDictionary *_shareAcceptationByItemID;
}

- (void).cxx_destruct;
- (void)removeAllShareAcceptationSidefaults;
- (id)shareAcceptOperationForItemID:(id)arg1;
- (void)addAcceptOperation:(id)arg1 forItemID:(id)arg2;
- (id)shareAcceptationSidefaultEnumerator;
- (id)rootItemID;
- (void)setServerZone:(id)arg1;
@property(readonly, nonatomic) BRCSharedServerZone *sharedZone;
- (id)asSharedClientZone;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(readonly, nonatomic) NSString *ownerName;

// Remaining properties
@property(readonly, nonatomic) _Bool isPrivateZone; // @dynamic isPrivateZone;

@end

