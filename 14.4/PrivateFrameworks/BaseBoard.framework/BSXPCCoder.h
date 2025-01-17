//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCDecoding-Protocol.h>
#import <BaseBoard/BSXPCEncoding-Protocol.h>
#import <BaseBoard/BSXPCSecureCoding-Protocol.h>

@class NSKeyedArchiver, NSKeyedUnarchiver, NSString;
@protocol OS_xpc_object;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding>
{
    NSObject<OS_xpc_object> *_message;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_xpc_object> *_codingContext;
    NSKeyedArchiver *_archiver;
    NSKeyedUnarchiver *_unarchiver;
    int _finalized;
}

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)coderWithMessage:(id)arg1;
+ (id)coder;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)_finishCoding;
- (id)_implicitDecodeXPCObjectForKey:(id)arg1;
- (void)_removeValueForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (id)decodeStringForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)createMessage;
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection;
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *message;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

