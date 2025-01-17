//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchToShareCore/NSObject-Protocol.h>

@class NSString, STSCategoryViewController;

@protocol STSCategoryViewControllerDelegate <NSObject>
- (void)categoryViewControllerScrollViewWillBeginDragging:(STSCategoryViewController *)arg1;
- (void)categoryViewControllerDidSelectClearRecentsButton:(STSCategoryViewController *)arg1;
- (void)categoryViewController:(STSCategoryViewController *)arg1 didSelectRecent:(NSString *)arg2;
- (void)categoryViewController:(STSCategoryViewController *)arg1 didSelectCategory:(NSString *)arg2 suggested:(_Bool)arg3;
@end

