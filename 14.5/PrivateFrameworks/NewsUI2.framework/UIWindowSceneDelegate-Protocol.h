//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/UISceneDelegate-Protocol.h>

@class CKShareMetadata, UIApplicationShortcutItem, UITraitCollection, UIWindow, UIWindowScene;
@protocol UICoordinateSpace;

@protocol UIWindowSceneDelegate <UISceneDelegate>

@optional
- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)windowScene:(UIWindowScene *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id <UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
@property(nonatomic, retain) UIWindow *window;
@end

