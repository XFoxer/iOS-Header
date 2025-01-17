//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INGetRestaurantGuestIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport>
{
    INRestaurantGuest *_guest;
    INRestaurantGuestDisplayPreferences *_guestDisplayPreferences;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // @synthesize guestDisplayPreferences=_guestDisplayPreferences;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

