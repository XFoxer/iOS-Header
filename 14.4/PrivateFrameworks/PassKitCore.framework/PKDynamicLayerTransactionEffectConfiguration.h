//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _style;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureTransactionEffectEmitterLayer:(id)arg1 withBounds:(struct CGRect)arg2;
- (id)configureTransactionEffectEmitterLayer:(id)arg1 withImage:(struct CGImage *)arg2 andEmitterShapeData:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

