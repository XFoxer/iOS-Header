//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSISEngine, NSISVariable, NSString;

@protocol NSISVariableDelegate <NSObject>
- (_Bool)nsis_valueOfVariableIsUserObservable:(NSISVariable *)arg1;
- (NSString *)nsis_descriptionOfVariable:(NSISVariable *)arg1;
- (void)nsis_valueOfVariable:(NSISVariable *)arg1 didChangeInEngine:(NSISEngine *)arg2;

@optional
- (int)nsis_orientationHintForVariable:(NSISVariable *)arg1;
@end

