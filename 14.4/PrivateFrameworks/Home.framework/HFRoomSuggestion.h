//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HFRoomSuggestion : NSObject
{
    NSString *_name;
    NSSet *_aliases;
    long long _priority;
}

+ (CDUnknownBlockType)priorityComparator;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSSet *aliases; // @synthesize aliases=_aliases;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

