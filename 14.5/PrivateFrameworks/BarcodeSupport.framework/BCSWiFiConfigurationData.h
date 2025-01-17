//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate>
{
    _Bool _WEP;
    _Bool _hidden;
    NSString *_ssid;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic, getter=isWEP) _Bool WEP; // @synthesize WEP=_WEP;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithSSID:(id)arg1 isWEP:(_Bool)arg2 password:(id)arg3 isHidden:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

