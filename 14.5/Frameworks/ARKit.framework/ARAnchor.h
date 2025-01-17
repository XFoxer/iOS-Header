//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARAnchorCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface ARAnchor : NSObject <ARAnchorCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_name;
    NSUUID *_sessionIdentifier;
    CDStruct_14d5dc5e _transform;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (id)initWithAnchor:(id)arg1;

@end

