//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/WCMessage.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding>
{
    _Bool _expectsResponse;
}

+ (_Bool)supportsSecureCoding;
@property _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(_Bool)arg4 expectsResponse:(_Bool)arg5;

@end

