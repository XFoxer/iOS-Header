//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSString;

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing>
{
    unsigned long long _policy;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) unsigned long long policy; // @synthesize policy=_policy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

