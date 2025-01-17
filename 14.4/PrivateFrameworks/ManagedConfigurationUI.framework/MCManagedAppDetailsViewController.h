//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class LSApplicationProxy, MCUIProfile;

__attribute__((visibility("hidden")))
@interface MCManagedAppDetailsViewController : MCUITableViewController
{
    MCUIProfile *_UIProfile;
    LSApplicationProxy *_managedAppProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LSApplicationProxy *managedAppProxy; // @synthesize managedAppProxy=_managedAppProxy;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
- (void)_profileChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setup;
- (id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2;
- (id)initWithUIProfile:(id)arg1 managedApp:(id)arg2;

@end

