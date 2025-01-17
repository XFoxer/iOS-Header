//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSString, UITransformer;

@interface UISceneLayerPresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    UITransformer *_transformer;
    double _alpha;
    _Bool _hidden;
    _Bool _clippingDisabled;
    unsigned long long _renderingMode;
    NSString *_minificationFilterName;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName; // @synthesize _minificationFilterName;
@property(nonatomic) unsigned long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(nonatomic, getter=isClippingDisabled) _Bool clippingDisabled; // @synthesize clippingDisabled=_clippingDisabled;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UITransformer *transformer; // @synthesize transformer=_transformer;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)_isEqualToDefaultContext;
- (id)_initWithSceneLayerPresentationContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

