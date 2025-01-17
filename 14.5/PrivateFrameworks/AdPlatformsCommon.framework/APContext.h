//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class APContentDepiction, NSArray, NSDictionary, NSString, NSUUID;

@interface APContext : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_requestedAdIdentifier;
    APContentDepiction *_current;
    NSArray *_adjacent;
    NSDictionary *_supplementalContext;
    CDStruct_8caa76fc _maxSize;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *supplementalContext; // @synthesize supplementalContext=_supplementalContext;
@property(retain) NSArray *adjacent; // @synthesize adjacent=_adjacent;
@property(retain) APContentDepiction *current; // @synthesize current=_current;
@property(retain) NSString *requestedAdIdentifier; // @synthesize requestedAdIdentifier=_requestedAdIdentifier;
@property CDStruct_8caa76fc maxSize; // @synthesize maxSize=_maxSize;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *fingerprint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 maxSize:(CDStruct_8caa76fc)arg2 requestedAdIdentifier:(id)arg3 currentContent:(id)arg4 adjacentContent:(id)arg5 supplementalContext:(id)arg6;

@end

