//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject
{
    NSMutableArray *mLevelStack;
}

- (void).cxx_destruct;
- (_Bool)hasLevels;
- (_Bool)popLevel;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (id)init;

@end

