//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DESRecordStore;

__attribute__((visibility("hidden")))
@interface NLFIAPluginDelegate : NSObject
{
    DESRecordStore *_recordStore;
}

- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)processSearchableItem:(id)arg1;
- (id)languageForText:(id)arg1;
- (_Bool)isSentMessage:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

