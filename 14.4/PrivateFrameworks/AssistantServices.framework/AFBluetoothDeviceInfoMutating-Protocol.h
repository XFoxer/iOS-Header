//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
- (void)setSupportsListeningModeTransparency:(_Bool)arg1;
- (void)setSupportsListeningModeANC:(_Bool)arg1;
- (void)setSupportsSpokenNotification:(_Bool)arg1;
- (void)setSupportsVoiceTrigger:(_Bool)arg1;
- (void)setSupportsInEarDetection:(_Bool)arg1;
- (void)setIsAdvancedAppleAudioDevice:(_Bool)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setAddress:(NSString *)arg1;
@end

