//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSTranslationInformation : NSObject
{
    NSString *_urlString;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(readonly, copy, nonatomic) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (_Bool)isEqual:(id)arg1;
- (id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3;
- (id)init;

@end

