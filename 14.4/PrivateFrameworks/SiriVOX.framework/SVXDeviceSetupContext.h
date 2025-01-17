//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class SVXDeviceSetupFlowScene, SVXDeviceSetupOptions;

@interface SVXDeviceSetupContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _timestamp;
    SVXDeviceSetupOptions *_options;
    SVXDeviceSetupFlowScene *_flowScene;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SVXDeviceSetupFlowScene *flowScene; // @synthesize flowScene=_flowScene;
@property(readonly, copy, nonatomic) SVXDeviceSetupOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2 flowScene:(id)arg3;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithTimestamp:(unsigned long long)arg1 presentsAlternativeFlowWhenStoreAccountIsUnavailable:(_Bool)arg2;
- (id)initWithTimestamp:(unsigned long long)arg1;

@end

