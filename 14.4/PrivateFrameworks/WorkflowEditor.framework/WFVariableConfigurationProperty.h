//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFContentProperty;

@interface WFVariableConfigurationProperty : NSObject
{
    _Bool _negativeProperty;
    WFContentProperty *_contentProperty;
    NSString *_label;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) _Bool negativeProperty; // @synthesize negativeProperty=_negativeProperty;
@property(readonly, nonatomic) WFContentProperty *contentProperty; // @synthesize contentProperty=_contentProperty;
- (id)initWithContentProperty:(id)arg1 negativeProperty:(_Bool)arg2;
- (id)initWithLabel:(id)arg1;

@end

