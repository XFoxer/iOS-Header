//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscribeAction-Protocol.h>

@class NSString;
@protocol SXAction;

@interface SXSubscribeAction : NSObject <SXSubscribeAction>
{
    id <SXAction> postPurchaseAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXAction> postPurchaseAction; // @synthesize postPurchaseAction;
@property(readonly, nonatomic) NSString *type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

