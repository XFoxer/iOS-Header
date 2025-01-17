//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPTInteractionOptions, RPTSettings;

@interface RPTTestRunner : NSObject
{
    RPTInteractionOptions *_interactionOptions;
    RPTSettings *_settings;
}

+ (void)runTestWithParameters:(id)arg1;
+ (void)playInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)isRecapAvailable;
- (void).cxx_destruct;
@property(nonatomic) RPTSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) RPTInteractionOptions *interactionOptions; // @synthesize interactionOptions=_interactionOptions;
- (void)runTestWithParameters:(id)arg1;
- (_Bool)_manageTestStartAndEndForParameters:(id)arg1;
- (void)playInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithInteractionOptions:(id)arg1;

@end

