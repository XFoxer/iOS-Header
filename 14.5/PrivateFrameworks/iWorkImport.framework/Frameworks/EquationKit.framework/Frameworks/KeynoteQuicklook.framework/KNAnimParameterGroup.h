//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KNAnimParameterSavedGroup, NSString;

@interface KNAnimParameterGroup : NSObject
{
    NSString *_name;
    KNAnimParameterSavedGroup *_savedGroup;
    NSString *_fileName;
}

+ (id)easeOutPath;
+ (id)easeInPath;
+ (id)easeInEaseOutPath;
+ (id)linearPath;
+ (id)mediaTimingFunctionForPath:(id)arg1 reversed:(_Bool)arg2;
+ (void)p_loadAllParametersIfNecessary;
+ (id)parameterGroupForName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) KNAnimParameterSavedGroup *savedGroup; // @synthesize savedGroup=_savedGroup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)p_loadParameters;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(_Bool)arg2;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (id)pathForAnimationCurve:(id)arg1;
- (double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;

@end

