//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier
{
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)specifierWithSpecifier:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
- (void).cxx_destruct;
- (_Bool)isEqualToSpecifier:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end

