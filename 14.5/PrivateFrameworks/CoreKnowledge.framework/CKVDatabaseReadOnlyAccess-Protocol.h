//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVDatabaseSelect, NSString;

@protocol CKVDatabaseReadOnlyAccess <NSObject>
- (_Bool)enumerateRecordResultsOfSelect:(CKVDatabaseSelect *)arg1 fromTableName:(NSString *)arg2 error:(id *)arg3 usingBlock:(void (^)(NSObject<CKVDatabaseRecord> *, id *, _Bool *))arg4;
@end

