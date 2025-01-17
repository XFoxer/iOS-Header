//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortStringWithPrefix;
- (id)MLSortString;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)_copyWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (id)sanitizedString;
- (_Bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;
@end

