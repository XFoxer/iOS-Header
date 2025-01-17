//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <DiagnosticExtensions/DEExtensionHostProtocol-Protocol.h>

@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(CDUnknownBlockType)arg1;
- (void)teardownForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setupForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)attachmentsForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasEntitlement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

