//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation
{
    _Bool _operationWasCancelled;
}

- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)issuerName;
- (void)cancelOperation;
- (_Bool)canCancelOperation;
- (void)startPrewarming;
- (void)performOperation;

@end

