//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class AFSpeechRequestOptions, SiriContextOverride;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>
{
    AFSpeechRequestOptions *_speechRequestOptions;
    SiriContextOverride *_contextOverride;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
@property(readonly, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithContextOverride:(id)arg1;
- (id)initWithSpeechRequestOptions:(id)arg1;

@end

