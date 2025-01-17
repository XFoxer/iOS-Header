//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableTextSourceFactory-Protocol.h>

@class NSString;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>
{
    id <SXSmartFieldFactory> _smartFieldFactory;
    id <SXDocumentLanguageProviding> _documentLanguageProvider;
    id <SXFontAttributesConstructor> _fontAttributesConstructor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXFontAttributesConstructor> fontAttributesConstructor; // @synthesize fontAttributesConstructor=_fontAttributesConstructor;
@property(readonly, nonatomic) id <SXDocumentLanguageProviding> documentLanguageProvider; // @synthesize documentLanguageProvider=_documentLanguageProvider;
@property(readonly, nonatomic) id <SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

