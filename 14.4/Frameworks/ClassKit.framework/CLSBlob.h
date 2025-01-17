//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSData, NSString;

@interface CLSBlob : CLSObject <CLSRelationable>
{
    int _type;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 data:(id)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

