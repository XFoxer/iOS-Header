//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceWalletMerchantTicket-Protocol.h>

@class NSString;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _mkMapServiceWalletMerchantTicket : NSObject <MKMapServiceWalletMerchantTicket>
{
    id <GEOMapServiceTicket> _ticket;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

