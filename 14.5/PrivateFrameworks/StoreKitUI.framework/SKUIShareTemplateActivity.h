//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateActivity : UIActivity
{
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2;

@end

