//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject
{
    CNFuture *_nameStringTokenizer;
}

+ (id)lazyNameStringTokenizerWithLocale:(id)arg1;
+ (id)tokensFromString:(id)arg1;
- (void).cxx_destruct;
@property(retain) CNFuture *nameStringTokenizer; // @synthesize nameStringTokenizer=_nameStringTokenizer;
- (CDUnknownBlockType)expandCJKNames;
- (id)tokensFromString:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

