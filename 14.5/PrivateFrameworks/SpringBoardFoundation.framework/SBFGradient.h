//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SBFGradient : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding>
{
    NSArray *_colors;
    NSArray *_locations;
    NSString *_type;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGGradient *)copyCGGradient;
- (void)configureLayer:(id)arg1;
- (id)cgColors;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

