//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

__attribute__((visibility("hidden")))
@interface CNEditInAppAction : CNContactAction
{
    CNUIUserActivityManager *_activityManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
- (id)title;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 activityManager:(id)arg2;

@end

