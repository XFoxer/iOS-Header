//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class UIViewController, WDAddDataManualEntryItem;

@protocol WDAddDataManualEntryItemDelegate <NSObject>
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)manualEntryItemDidUpdate:(WDAddDataManualEntryItem *)arg1;
@end

