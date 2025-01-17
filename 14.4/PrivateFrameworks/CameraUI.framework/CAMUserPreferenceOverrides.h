//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CAMUserPreferenceOverrides : NSObject
{
    NSNumber *_captureMode;
    NSNumber *_captureDevice;
    NSNumber *_videoConfiguration;
    NSNumber *_wantsQRCodes;
    NSNumber *_flashMode;
    NSNumber *_torchMode;
    NSNumber *_aspectRatioCrop;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *aspectRatioCrop; // @synthesize aspectRatioCrop=_aspectRatioCrop;
@property(retain, nonatomic) NSNumber *torchMode; // @synthesize torchMode=_torchMode;
@property(retain, nonatomic) NSNumber *flashMode; // @synthesize flashMode=_flashMode;
@property(retain, nonatomic) NSNumber *wantsQRCodes; // @synthesize wantsQRCodes=_wantsQRCodes;
@property(retain, nonatomic) NSNumber *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(retain, nonatomic) NSNumber *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) NSNumber *captureMode; // @synthesize captureMode=_captureMode;
@property(readonly, nonatomic) _Bool hasOverrides;
- (id)initWithOverrides:(id)arg1;
- (id)initWithLaunchOptions:(id)arg1;
- (id)initWithShortcutItem:(id)arg1;
- (id)initWithConfigurationURL:(id)arg1;

@end

