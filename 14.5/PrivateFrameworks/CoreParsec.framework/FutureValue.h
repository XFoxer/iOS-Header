//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface FutureValue : NSObject
{
    id _value;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain) id value; // @synthesize value=_value;
- (id)init;

@end

