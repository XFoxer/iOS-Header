//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitMathMLNode.h>

#import <EquationKit/EQKitLayoutSchemataStackGroup-Protocol.h>
#import <EquationKit/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackGroup : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackGroup>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const set_c5c159f9 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

