//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBServiceOptions;

@interface TRIPBServiceDescriptorProto : TRIPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSMutableArray *methodArray; // @dynamic methodArray;
@property(readonly, nonatomic) unsigned long long methodArray_Count; // @dynamic methodArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TRIPBServiceOptions *options; // @dynamic options;

@end

