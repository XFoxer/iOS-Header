//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager, AVOutputDeviceImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceInternal : NSObject
{
    id <AVOutputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    unsigned long long deviceFeatures;
    id <AVOutputDeviceCommunicationChannelDelegate> communicationChannelDelegate;
    id <AVOutputDeviceCommunicationChannelManager> commChannelManager;
}

- (void).cxx_destruct;

@end

