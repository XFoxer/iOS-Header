//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGXPCResponse2.h>

@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2
{
    id <NSSecureCoding> _response3;
}

+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1 also:(id)arg2 also:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSSecureCoding> response3; // @synthesize response3=_response3;
- (id)response2;
- (id)response1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

