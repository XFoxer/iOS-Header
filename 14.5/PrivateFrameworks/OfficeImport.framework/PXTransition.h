//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXTransition : NSObject
{
}

+ (void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3;
+ (void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3;
+ (_Bool)isPowerPoint2013TransitionType:(int)arg1;
+ (_Bool)isPowerPoint2010TransitionType:(int)arg1;
+ (void)readTransitionFromNode:(struct _xmlNode *)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3;
+ (id)reverseDirectionAttributeMap;
+ (id)directionAttributeMap;
+ (id)transitionNodeMap;
+ (void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3;
+ (_Bool)mapDirection:(id)arg1 outDir:(int *)arg2;
+ (void)writeReverseInOut:(int)arg1 file:(id)arg2;
+ (void)writeInOut:(int)arg1 file:(id)arg2;
+ (void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeReverseDirection:(int)arg1 file:(id)arg2;
+ (void)writeDirection:(int)arg1 file:(id)arg2;
+ (int)readInOut:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readOrientation:(struct _xmlNode *)arg1 attribute:(const char *)arg2 defaultValue:(int)arg3;
+ (int)readReverseDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;

@end

