//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>
#import <AppleMediaServicesUI/PRXFlowDelegate-Protocol.h>

@class AMSEngagementRequest, AMSEngagementResult, NSError, NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, PRXFlowDelegate, AMSBagConsumer>
{
    _Bool _presented;
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSEngagementRequest *_request;
    AMSEngagementResult *_result;
    UIViewController *_viewController;
}

+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AMSEngagementResult *result; // @synthesize result=_result;
@property(retain, nonatomic) AMSEngagementRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (long long)_modalPresentationStyle;
- (id)_viewControllerForType:(id)arg1;
- (void)_receivedPurchaseResult:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (id)_infoWithBuyParams:(id)arg1 additionalInfo:(id)arg2;
- (void)_finishWithResultInfo:(id)arg1 error:(id)arg2;
- (_Bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (id)presentEngagement;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

