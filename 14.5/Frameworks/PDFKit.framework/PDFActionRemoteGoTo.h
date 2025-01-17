//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSURL, PDFActionRemoteGoToPrivateVars;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying>
{
    PDFActionRemoteGoToPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)toolTipNoLabel;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(copy, nonatomic) NSURL *URL;
@property(nonatomic) struct CGPoint point;
@property(nonatomic) unsigned long long pageIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2 fileURL:(id)arg3;

@end

