//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject <MFObject>
{
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
+ (id)pen;
- (void).cxx_destruct;
- (int)getStyle;
- (int)getWidth;
- (id)getColor;
- (int)selectInto:(id)arg1;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
- (id)init;

@end

