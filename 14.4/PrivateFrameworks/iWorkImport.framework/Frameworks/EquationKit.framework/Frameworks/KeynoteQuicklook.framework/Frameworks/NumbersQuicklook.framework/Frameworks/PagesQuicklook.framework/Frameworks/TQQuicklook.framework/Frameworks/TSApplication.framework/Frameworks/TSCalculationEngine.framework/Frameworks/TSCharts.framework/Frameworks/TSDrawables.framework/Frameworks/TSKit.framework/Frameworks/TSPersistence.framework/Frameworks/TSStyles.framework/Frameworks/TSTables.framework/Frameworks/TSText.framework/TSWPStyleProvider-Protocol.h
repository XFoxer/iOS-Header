//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class TSWPParagraphStyle;

@protocol TSWPStyleProvider <NSObject>
- (TSWPParagraphStyle *)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;
@end

