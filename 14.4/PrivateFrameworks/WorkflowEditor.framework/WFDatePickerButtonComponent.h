//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFDatePickerButtonComponent : CKCompositeComponent
{
    _Bool _becomeFirstResponder;
    WFCustomButtonComponent *_buttonComponent;
}

+ (id)newWithAttributes:(const struct WFDatePickerAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 size:(const struct CKComponentSize *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(readonly, nonatomic) __weak WFCustomButtonComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;

@end

