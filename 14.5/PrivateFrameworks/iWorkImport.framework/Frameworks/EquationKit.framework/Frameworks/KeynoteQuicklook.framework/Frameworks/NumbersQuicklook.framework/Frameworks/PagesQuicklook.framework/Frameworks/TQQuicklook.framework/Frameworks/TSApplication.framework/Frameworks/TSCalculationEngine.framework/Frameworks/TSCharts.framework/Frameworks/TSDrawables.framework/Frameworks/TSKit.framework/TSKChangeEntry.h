//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSKChangeEntry : NSObject
{
    id _changeSource;
    NSMutableArray *_changes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) id changeSource; // @synthesize changeSource=_changeSource;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end

