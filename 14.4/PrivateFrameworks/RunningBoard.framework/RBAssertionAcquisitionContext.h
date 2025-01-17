//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject
{
    _Bool _allowAbstractTarget;
    _Bool _unitTesting;
    RBProcess *_process;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _acquisitionPolicy;
    id _holdToken;
}

+ (id)contextForProcess:(id)arg1 withDescriptor:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool unitTesting; // @synthesize unitTesting=_unitTesting;
@property(retain, nonatomic) id holdToken; // @synthesize holdToken=_holdToken;
@property(nonatomic) unsigned long long acquisitionPolicy; // @synthesize acquisitionPolicy=_acquisitionPolicy;
@property(nonatomic) _Bool allowAbstractTarget; // @synthesize allowAbstractTarget=_allowAbstractTarget;
@property(readonly, nonatomic) RBSAssertionDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) RBProcess *process; // @synthesize process=_process;

@end

