//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject
{
    UIViewController *_viewController;
    long long _level;
}

- (void).cxx_destruct;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithViewController:(id)arg1 atLevel:(long long)arg2;

@end

