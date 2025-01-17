//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitMathMLMToken.h>

#import <EquationKit/EQKitLayoutSchemataOperator-Protocol.h>
#import <EquationKit/EQKitOperator-Protocol.h>

@class NSString;

@interface EQKitMathMLMOperator : EQKitMathMLMToken <EQKitOperator, EQKitLayoutSchemataOperator>
{
    unsigned short mOperatorId;
}

- (unsigned int)operatorUnicharOrNul;
- (id)schemataOperator;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (unsigned short)operatorId;
- (struct Schemata)layoutSchemata;
- (const set_c5c159f9 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithString:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

