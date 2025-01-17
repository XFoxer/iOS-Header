//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField
{
    NSString *_rubyText;
}

@property(copy, nonatomic) NSString *rubyText; // @synthesize rubyText=_rubyText;
- (_Bool)canCopy:(struct _NSRange)arg1;
- (_Bool)allowsEditing;
- (int)styleAttributeArrayKind;
- (unsigned int)attributeArrayKind;
- (int)elementKind;
- (id)text;
@property(readonly, nonatomic) int baseTextScript;
@property(readonly, nonatomic) NSString *baseText;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;

@end

