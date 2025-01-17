//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface TabDocumentDropHandler : NSObject
{
    unsigned long long _maximumNumberOfTabs;
    UIViewController *_alertPresentationViewController;
}

+ (id)tabDocumentsForDragItems:(id)arg1;
+ (_Bool)canHandleSession:(id)arg1;
+ (unsigned long long)proposedOperationForSession:(id)arg1 intoWindowWithPrivateBrowsingEnabled:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *alertPresentationViewController; // @synthesize alertPresentationViewController=_alertPresentationViewController;
@property(readonly, nonatomic) unsigned long long maximumNumberOfTabs; // @synthesize maximumNumberOfTabs=_maximumNumberOfTabs;
- (unsigned long long)_minimumNumberOfNewTabsRequiringConfirmation;
- (void)promptIfNeededToConfirmNumberOfNavigationIntents:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(CDUnknownBlockType)arg3 insertionHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(CDUnknownBlockType)arg3 insertionHandler:(CDUnknownBlockType)arg4;
- (id)initWithMaximumNumberOfTabs:(unsigned long long)arg1 alertPresentationViewController:(id)arg2;
- (id)initWithAlertPresentationViewController:(id)arg1;
- (id)init;

@end

