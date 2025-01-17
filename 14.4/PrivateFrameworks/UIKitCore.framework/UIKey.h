//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface UIKey : NSObject <NSCopying, NSCoding>
{
    long long _modifierFlags;
    long long _keyCode;
    NSString *_unmodifiedInput;
    NSString *_modifiedInput;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setModifiedInput:) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;
@property(retain, nonatomic, setter=_setUnmodifiedInput:) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(nonatomic, setter=_setKeyCode:) long long keyCode; // @synthesize keyCode=_keyCode;
@property(nonatomic, setter=_setModifierFlags:) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
- (_Bool)unmodifiedKeyCodeEquals:(long long)arg1;
- (_Bool)equalsKeyCode:(long long)arg1 modifiers:(long long)arg2;
- (_Bool)modifiersEqual:(long long)arg1;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (id)description;
@property(readonly, nonatomic) NSString *charactersIgnoringModifiers;
@property(readonly, nonatomic) NSString *characters;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithKey:(id)arg1;
- (id)initWithKeyboardEvent:(id)arg1;

@end

