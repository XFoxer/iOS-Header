//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriClientFlow/AFServiceHelper-Protocol.h>

@class NSString;
@protocol AFServiceHelper;

@interface CFServiceHelper : NSObject <AFServiceHelper>
{
    _Bool _isClientLiteHelper;
    id <AFServiceHelper> _serviceHelper;
}

- (void).cxx_destruct;
@property _Bool isClientLiteHelper; // @synthesize isClientLiteHelper=_isClientLiteHelper;
@property(retain) id <AFServiceHelper> serviceHelper; // @synthesize serviceHelper=_serviceHelper;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (void)handleRemoteCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;
- (id)peerInfoForCurrentCommand;
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTimeoutSuspended;
- (_Bool)isDeviceInCarDND;
- (_Bool)isDeviceInStarkMode;
- (_Bool)isDeviceLockedWithPasscode;
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (void)dismissAssistant;
- (_Bool)openSensitiveURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

