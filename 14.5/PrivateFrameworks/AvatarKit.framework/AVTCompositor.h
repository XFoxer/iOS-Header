//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface AVTCompositor : NSObject
{
    NSMutableSet *_textureProviders;
}

+ (id)propertyNames;
- (void).cxx_destruct;
- (void)configureMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;
- (void)componentDidChangeForTypes:(unsigned long long)arg1;
- (void)skinColorDidChange;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)init;

@end

