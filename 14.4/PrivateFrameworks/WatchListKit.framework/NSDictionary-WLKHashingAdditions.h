//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (WLKHashingAdditions)
- (unsigned long long)wlk_deepHash;
- (id)wlk_dictionaryDifference:(id)arg1;
- (id)wlk_caseInsensitiveValueForKey:(id)arg1;
- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)wlk_urlForKey:(id)arg1;
- (id)wlk_dataForKey:(id)arg1;
- (id)wlk_arrayForKey:(id)arg1;
- (id)wlk_dictionaryForKey:(id)arg1;
- (id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (id)wlk_dateForKey:(id)arg1;
- (_Bool)wlk_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)wlk_stringForKey:(id)arg1;
- (id)wlk_numberForKey:(id)arg1;
- (id)wlk_artworkVariantListingForKey:(id)arg1;
@end

