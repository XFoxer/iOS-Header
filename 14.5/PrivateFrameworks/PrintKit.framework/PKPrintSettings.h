//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject
{
    NSMutableDictionary *_dict;
    PKPaper *paper;
}

+ (id)printSettingsForPrinter:(id)arg1;
+ (id)photo;
+ (id)default;
@property(retain, nonatomic) PKPaper *paper; // @synthesize paper;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)settingsDict;
- (id)init;
- (void)dealloc;

@end

