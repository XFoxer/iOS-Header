//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface StepTrayItem : NSObject
{
    unsigned long long _action;
}

@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *title;
- (id)imageForView:(id)arg1;
- (id)initWithTrayAction:(unsigned long long)arg1;

@end

