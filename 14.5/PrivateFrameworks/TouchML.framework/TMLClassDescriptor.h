//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, TMLValueExpression;

@interface TMLClassDescriptor : NSObject <TMLModelSerialize>
{
    NSString *_className;
    NSString *_superClassName;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_signals;
    NSMutableDictionary *_methods;
    NSMutableDictionary *_childClasses;
    TMLValueExpression *_initializer;
    _Bool _optional;
    TMLClassDescriptor *_superClass;
    Class _objcClass;
    NSString *_objcClassName;
}

+ (id)decode:(const struct ProtobufCMessage *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) TMLValueExpression *initializer; // @synthesize initializer=_initializer;
@property(copy, nonatomic) NSString *objcClassName; // @synthesize objcClassName=_objcClassName;
@property(retain, nonatomic) TMLClassDescriptor *superClass; // @synthesize superClass=_superClass;
@property(readonly, nonatomic) NSDictionary *childClasses; // @synthesize childClasses=_childClasses;
@property(readonly, nonatomic) NSDictionary *methods; // @synthesize methods=_methods;
@property(readonly, nonatomic) NSDictionary *signals; // @synthesize signals=_signals;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSString *superClassName; // @synthesize superClassName=_superClassName;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (_Bool)mergeFromClassDescriptor:(id)arg1;
- (_Bool)canMergeFromClassDescriptor:(id)arg1;
@property(readonly, nonatomic) NSDictionary *inheritedMethods;
@property(readonly, nonatomic) NSDictionary *inheritedSignals;
@property(readonly, nonatomic) NSDictionary *inheritedProperties;
- (_Bool)isEqual:(id)arg1;
- (void)addChildClass:(id)arg1;
- (void)addMethod:(id)arg1;
- (void)addSignal:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)addProperty:(id)arg1;
@property(readonly, nonatomic) Class objcClass; // @synthesize objcClass=_objcClass;
- (id)initWithName:(id)arg1 superClassName:(id)arg2 initializer:(id)arg3 optional:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

