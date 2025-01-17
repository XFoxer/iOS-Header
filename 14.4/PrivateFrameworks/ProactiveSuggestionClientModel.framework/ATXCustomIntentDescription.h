//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>
{
    NSString *_typeName;
    NSDictionary *_parameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (id)createIntent;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 parameters:(id)arg2;

@end

