//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteAction.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DDMapAction : DDRemoteAction
{
    NSURL *_commitURL;
}

+ (_Bool)actionAvailableForContact:(id)arg1;
+ (id)viewControllerProviderClass;
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
- (void).cxx_destruct;
- (id)menuActionClasses;
- (id)previewActions;
- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

