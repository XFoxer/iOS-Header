//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSString;
@protocol PINEntryView;

@protocol PSPINEntryViewDelegate <NSObject>
- (void)pinView:(id <PINEntryView>)arg1 pinEntered:(NSString *)arg2;
- (void)pinView:(id <PINEntryView>)arg1 pinValueChanged:(NSString *)arg2;
@end

