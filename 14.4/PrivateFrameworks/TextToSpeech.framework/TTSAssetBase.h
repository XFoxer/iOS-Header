//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface TTSAssetBase : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSNumber *_compatibilityVersion;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(copy, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy, nonatomic) NSNumber *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

