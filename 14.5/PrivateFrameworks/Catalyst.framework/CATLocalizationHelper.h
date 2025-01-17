//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CATLocalizationHelper : NSObject
{
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
    NSBundle *_bundle;
}

+ (id)helperForBundle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)stringByKeyForTableName:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end

