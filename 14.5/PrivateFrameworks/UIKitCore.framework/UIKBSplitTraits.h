//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIKBSplitTraits : NSObject
{
    unsigned long long _corners;
    struct CGRect _leftFrame;
    struct CGRect _rightFrame;
}

+ (id)traitsWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(readonly, nonatomic) struct CGRect rightFrame; // @synthesize rightFrame=_rightFrame;
@property(readonly, nonatomic) struct CGRect leftFrame; // @synthesize leftFrame=_leftFrame;
- (id)initWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(unsigned long long)arg3;

@end

