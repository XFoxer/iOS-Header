//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject
{
}

+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;
+ (id)stringForRectAlignment:(int)arg1;
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (id)rectAlignmentEnumMap;

@end

