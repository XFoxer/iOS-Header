//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSAnimationFenceHandle.h>

@class CAFenceHandle;

@interface BKSCAAnimationFenceHandle : BKSAnimationFenceHandle
{
    CAFenceHandle *_caFence;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
- (_Bool)shouldIgnoreTrigger;
- (id)trigger;
- (id)CAFenceHandle;
- (unsigned int)CAPort;
- (void)invalidate;
- (_Bool)isUsable;
- (unsigned long long)fenceName;
- (void)dealloc;
- (id)_initWithCAFenceHandle:(id)arg1;

@end

