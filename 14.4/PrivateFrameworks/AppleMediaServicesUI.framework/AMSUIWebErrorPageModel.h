//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>
{
    _Bool _errorMessageInternalOnly;
    NSString *_backgroundColor;
    NSString *_errorMessage;
    AMSUIWebNavigationBarModel *_navigationBar;
    id <AMSUIWebActionRunnable> _action;
    CDUnknownBlockType _actionBlock;
    NSString *_actionButtonTitle;
    NSString *_errorTitle;
    AMSUIWebClientContext *_context;
    struct CGSize _windowSize;
}

+ (id)_messageFromError:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(nonatomic) _Bool errorMessageInternalOnly; // @synthesize errorMessageInternalOnly=_errorMessageInternalOnly;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> action; // @synthesize action=_action;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewController;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

