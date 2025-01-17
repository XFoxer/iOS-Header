//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2EncodedResponseThread.h>

#import <CoreHAP/HAP2EncodedAttributeDatabaseResponse-Protocol.h>

@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse>
{
    NSDictionary *_attributeDatabase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *attributeDatabase; // @synthesize attributeDatabase=_attributeDatabase;
- (id)initWithBTLEResponse:(id)arg1 attributeDatabase:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

